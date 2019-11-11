#include "pch.h"
#include "Processor.h"
#include <iostream>
#include <windows.h>
#include <chrono>
#include <ctime>
#include <thread>   
#include <tchar.h>
#include <string>

using namespace std;

string getTime() {
	char buff[20];
	struct tm *sTm;

	time_t now = time(0);
	sTm = gmtime(&now);

	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S", sTm);

	return string(buff).c_str();
}

string getTimeTab(){
	return getTime().append("\t");
}

bool __stdcall create(const char* cmd, HANDLE* handle) {
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	si.cb = sizeof(STARTUPINFO);
	si.dwFlags = STARTF_USESHOWWINDOW;
	
	si.wShowWindow = SW_HIDE;
	ULONG rc;

	if (CreateProcess(
		cmd,
		NULL,			                // Command line
		NULL,							// Process handle not inheritable
		NULL,							// Thread handle not inheritable
		TRUE,							// Set handle inheritance to FALSE
		0,				                // No creation flags
		NULL,							// Use parent's environment block
		NULL,							// Use parent's starting directory 
		&si,							// Pointer to STARTUPINFO structure
		&pi								// Pointer to PROCESS_INFORMATION structure (removed extra parentheses)
	)) {
	
		*handle = OpenProcess(SYNCHRONIZE | PROCESS_TERMINATE, TRUE, pi.dwProcessId);
		
		WaitForInputIdle(pi.hProcess, INFINITE);
		if (!GetExitCodeProcess(pi.hProcess, &rc))
			rc = 0;

		cout <<getTimeTab()<<"Close Process Thread:\t"<< pi.hThread << " | " << CloseHandle(pi.hThread) << endl;		
		cout <<getTimeTab()<<"Close Process:\t" << pi.hProcess << " | " << CloseHandle(pi.hProcess) << endl;
		cout <<getTimeTab()<<"Exit code:\t" << rc << endl;

		return (rc != 0);
	}

	cout << getTimeTab() << "false "<< endl;

	return false;
}


bool isExit = false;
bool isCheckVisible = false;
bool _mutex = false;
HWND PROCESS_WIN = 0;

int pThreadExit(int timer) {

	BYTE prev_escape = 0, curr_escape = 0;
	const auto timeWindow = std::chrono::milliseconds(timer);
	while (!isExit)
	{
		auto start = std::chrono::steady_clock::now();
		DWORD rc;

		auto isVisible = IsWindowVisible(PROCESS_WIN);
		if (!isVisible && PROCESS_WIN != 0 && isCheckVisible) {
			_mutex = true;
			isExit = true;

			if (handleLoader != 0)
				cout << getTimeTab() << " *************** Terminate Game\t" << TerminateProcess(handleLoader, 0) << endl;

			cout << "************************ EXIT ************************" << endl;

		}

		auto end = std::chrono::steady_clock::now();
		auto elapsed = end - start;

		auto timeToWait = timeWindow - elapsed;
		if (timeToWait > std::chrono::milliseconds::zero())
			std::this_thread::sleep_for(timeToWait);
	}

	return 1;
}

HANDLE hThread = 0;
HANDLE hThreadExit = 0;
HANDLE handleLoader = 0;

int main(int argc, char* argv[]) {

	if (argc <= 1) {
		MessageBox(NULL, "Indice de parametro incorrecto ", "Informacion", MB_OK);
		return -1;
	}

	if (argc == 3)
	{
		cout << getTimeTab() << "Start Thread..." << endl;
		DWORD id = 0;
		hThreadExit = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)&pThreadExit, (LPVOID)50, 0, &id);
	}

	auto res = create(argv[1], &handleLoader) ? 1 : -1;
	cout <<getTimeTab()<< "Wait thread:\t" << WaitForSingleObject(pThreadExit, INFINITE) << endl;
	cout <<getTimeTab()<< "Close Thread:\t " << CloseHandle(pThreadExit)  << endl;
	
	return res;

}

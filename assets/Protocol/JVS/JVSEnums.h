#ifndef _JVS_H
#define _JVS_H

#include <map>

#pragma once

unordered_map<DWORD, const char*> opCodes = {
	{0x00, "Machine Reset (TTXRESET)"},
	{0x01, "Watchdog Kick (TTXWDTKICKA)"},
	{0x02, "Unk02(TTXUNK2) - Unknown 02"},
	{0x03, "Unk03(TTXUNK3) - Unknown 03"},
	{0x04, "Watchdog? 04 (TTXWDT4) "},
	{0x05, "Watchdog Set (TTXWDTSET) "},
	{0x06, "Unk06 (TTXUNK6)"},
	{0x07, "Unk07 (TTXUNK7)"},
	{0x08, "Watchdog Kick B(TTXWDTKICKB)"},
	{0x0F, "Reset"},
	{0xF1, "Set Address (SETADDR)"},
	{0xF2, "Comm. Method Change (COMMCHG)"},
	{0x10, "I/O IDENTIFICADOR "},
	{0x11, "COMANDO REVISION FORMATO "},
	{0x12, "REVISION PLACA JVS"},
	{0x13, "Comm Version"},
	{0x14, "IO REPORT"},
	{0x15, "MAIN ID"},
	{0x20, "Switch Inputs (SWINP)"},
	{0x21, "Coin Inputs (COININP)"},
	{0x22, "Analog Inputs (ANLINP) "},
	{0x23, "Rotary Inputs (ROTINP) "},
	{0x24, "KeyCode Inputs (KEYINP) "},
	{0x30, "COIN COUNTER DECREASE (COINDEC)"},
	{0x31, "Payout Counter Increase (PAYINC)"},
	{0x32, "Generic Output 1 (OUTPUT1)"},
	{0x37, "Generic Output 2 (OUTPUT2)"},
	{0x38, "Generic Output 3 (OUTPUT3)"},
	{0x33, "Analog Output (ANLOUT)"},
	{0x2F, "Error de checksum!"},
	{0x21, "LEYENDO INCREMENT COINS "},
	{0x34, "Character Output (CHAROUT)"},
	{0x35, "Coin counter Increase (COININC)"},
	{0x36, "Payout Counter Decrease (PAYDEC)"},
	{JVS_OP_RESET,"RESET ALL NODES"}
};


#endif

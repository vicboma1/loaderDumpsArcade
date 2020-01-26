#ifndef _OPENGL_CREATE_H_
#define _OPENGL_CREATE_H_

#include "stdafx.h"

//Tetris
extern HWND TGM3_;

//https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/gluPerspective.xml
typedef void(__stdcall *LPgluPerspective)(double fovy, double aspect, double zNear, double zFar);
static LPgluPerspective __gluPerspective = NULL;
void __stdcall _H_gluPerspective(double fovy, double aspect, double zNear, double zFar);

//https://docs.microsoft.com/es-es/windows/win32/opengl/glloadidentity
typedef void(__stdcall *LPglLoadIdentity)(void);
static LPglLoadIdentity __glLoadIdentity = NULL;
void __stdcall _H_glLoadIdentity(void);

//https://docs.microsoft.com/en-us/windows/win32/opengl/glmatrixmode
typedef void(__stdcall *LPglMatrixMode)(unsigned int mode);
static LPglMatrixMode __glMatrixMode = NULL;
void __stdcall _H_glMatrixMode(unsigned int mode);

//https://docs.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-swapbuffers
typedef BOOL(__stdcall *LPwglSwapBuffers) (_In_ HDC hDc);
static LPwglSwapBuffers __wglSwapBuffers = NULL;
BOOL  __stdcall _H_wglSwapBuffers(_In_ HDC hDc);

//https://docs.microsoft.com/en-us/windows/win32/opengl/glclear
typedef void(__stdcall *LPglClear)(GLbitfield mask);
static LPglClear __glClear;
void __stdcall _H_glClear(GLbitfield mask);

//https://www.glfw.org/docs/3.2/group__init.html
typedef int(__stdcall *LPglfwInit)();
static LPglfwInit __glfwInit = NULL;
int __stdcall _H_glfwInit();

//https://www.khronos.org/registry/OpenGL-Refpages/es3.0/html/glViewport.xhtml
typedef void(__stdcall *LPglViewport)(int x, int y, int width, int height);
static LPglViewport __glViewport = NULL;
void __stdcall _H_glViewport(int x, int y, int width, int height);

//https://docs.microsoft.com/en-us/windows/win32/opengl/glscissor
typedef void(__stdcall *LPglScissor)(int x, int y, int width, int height);
static LPglScissor __glScissor = NULL;
void __stdcall _H_glScissor(int x, int y, int width, int height);

//https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/glFrustum.xml
typedef void(__stdcall *LPglFrustum)(double left, double right, double bottom, double top, double nearVal, double farVal);
static LPglFrustum __glFrustum = NULL;
void __stdcall _H_glFrustum(double left, double right, double bottom, double top, double nearVal, double farVal);

//https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/gluOrtho2D.xml
typedef void(__stdcall *LPgluOrtho2D)(double left, double right, double bottom, double top);
static LPgluOrtho2D __gluOrtho2D = NULL;
void __stdcall _H_gluOrtho2D(double left, double right, double bottom, double top);

//https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/glOrtho.xml
typedef void(__stdcall *LPglOrtho)(double left, double right, double bottom, double top, double nearVal, double farVal);
static LPglOrtho __glOrtho = NULL;
void __stdcall _H_glOrtho(double left, double right, double bottom, double top, double nearVal, double farVal);

//https://www.opengl.org/resources/libraries/glut/spec3/node11.html
typedef void(__stdcall *LPglutInitWindowSize)(int width, int height);
static LPglutInitWindowSize __glutInitWindowSize = NULL;
void __stdcall _H_glutInitWindowSize(int width, int height);

//https://www.opengl.org/resources/libraries/glut/spec3/node11.html
typedef void(__stdcall *LPglutReshapeWindow)(int width, int height);
static LPglutReshapeWindow __glutReshapeWindow = NULL;
void __stdcall _H_glutReshapeWindow(int width, int height);

#endif
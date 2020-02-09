#ifdef _OPENGL_32_

#ifndef _GLU_32_CREATE_H_
#define _GLU_32_CREATE_H_

#include "stdafx.h"

	//https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/gluPerspective.xml
	typedef void(__stdcall *LPgluPerspective)(double fovy, double aspect, double zNear, double zFar);
	static LPgluPerspective __gluPerspective = NULL;
	void __stdcall Hook_gluPerspective(double fovy, double aspect, double zNear, double zFar);

	//https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/gluOrtho2D.xml
	typedef void(__stdcall *LPgluOrtho2D)(double left, double right, double bottom, double top);
	static LPgluOrtho2D __gluOrtho2D = NULL;
	void __stdcall Hook_gluOrtho2D(double left, double right, double bottom, double top);

	//https://www.opengl.org/resources/libraries/glut/spec3/node11.html
	typedef void(__stdcall *LPglutInitWindowSize)( int width, int height);
	static LPglutInitWindowSize __glutInitWindowSize = NULL;
	void __stdcall Hook_glutInitWindowSize(int width, int height);

	//https://www.opengl.org/resources/libraries/glut/spec3/node11.html
	typedef void(__stdcall *LPglutReshapeWindow)(int width, int height);
	static LPglutReshapeWindow __glutReshapeWindow = NULL;
	void __stdcall Hook_glutReshapeWindow(int width, int height);

#endif
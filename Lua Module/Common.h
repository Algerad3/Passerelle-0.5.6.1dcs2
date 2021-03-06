#ifndef COMMON_H
#define COMMON_H

#include <Windows.h>
#include "Debug.h"
#include "Config.h"

#define SCREEN_WIDTH	320
#define SCREEN_HEIGHT	240
#define SCREEN_BUFSIZE	(SCREEN_WIDTH * SCREEN_HEIGHT * 3)


#	define _LIB_NAME	"passerelledcs4"
#	define _LIB_OPEN	luaopen_passerelledcs4


#define LUALIB_NAME		_LIB_NAME
#define LUALIB_IDENT	LUALIB_NAME "LuaLib"
#define LUALIB_TABLE	LUALIB_IDENT "Data"
#define LUALIB_OPEN( )	int __declspec(dllexport) __cdecl _LIB_OPEN (lua_State* L)

#define META_BITMAP	_LIB_NAME "BITMAP"
#define META_WINDOW	_LIB_NAME "WINDOW"

#define TYPE_BITMAP	_LIB_NAME "..__Bitmap"
#define TYPE_WINDOW	_LIB_NAME "..__Window"

#define DIRECTINPUT_VERSION 0x0800

#endif

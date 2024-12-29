#pragma once

#include <Windows.h>

namespace wgl
{
	bool initialize(HMODULE hModule);

	int WINAPI hk_ChoosePixelFormat(HDC hdc, CONST PIXELFORMATDESCRIPTOR* ppfd);
	BOOL WINAPI hk_CopyContext(HGLRC hrcSource, HGLRC hrcDest, UINT fuMask);
	HGLRC WINAPI hk_CreateContext(HDC hdc);
	HGLRC WINAPI hk_CreateLayerContext(HDC hdc, int iLayer);
	BOOL WINAPI hk_DeleteContext(HGLRC hrc);
	BOOL WINAPI hk_DescribeLayerPlane(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd);
	int  WINAPI hk_DescribePixelFormat(HDC hdc, int ipfd, UINT cjpfd, LPPIXELFORMATDESCRIPTOR ppfd);
	HGLRC WINAPI hk_GetCurrentContext(VOID);
	HDC WINAPI hk_GetCurrentDC(VOID);
	PROC WINAPI hk_GetDefaultProcAddress(LPCSTR lpszProc);
	int WINAPI hk_GetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF* pcr);
	int WINAPI hk_GetPixelFormat(HDC hdc);
	PROC WINAPI hk_GetProcAddress(LPCSTR lpszProc);
	BOOL WINAPI hk_MakeCurrent(HDC hdc, HGLRC hrc);
	BOOL WINAPI hk_RealizeLayerPalette(HDC hdc, int iLayerPlane, BOOL bRealize);
	int WINAPI hk_SetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, CONST COLORREF* pcr);
	BOOL WINAPI hk_SetPixelFormat(HDC hdc, int ipfd, CONST PIXELFORMATDESCRIPTOR* ppfd);
	BOOL WINAPI hk_ShareLists(HGLRC hrcSource, HGLRC hrcShare);
	BOOL WINAPI hk_SwapBuffers(HDC hdc);
	BOOL WINAPI hk_SwapLayerBuffers(HDC hdc, UINT fuFlags);
	DWORD WINAPI hk_SwapMultipleBuffers(UINT cBuffers, CONST WGLSWAP* pwswapAll);
	BOOL WINAPI hk_UseFontBitmapsA(HDC hdc, DWORD first, DWORD count, DWORD listBase);
	BOOL WINAPI hk_UseFontBitmapsW(HDC hdc, DWORD first, DWORD count, DWORD listBase);
	BOOL WINAPI hk_UseFontOutlinesA(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT chordalDeviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
	BOOL WINAPI hk_UseFontOutlinesW(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT chordalDeviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);

	extern decltype(&hk_ChoosePixelFormat) fn_ChoosePixelFormat;
	extern decltype(&hk_CopyContext) fn_CopyContext;
	extern decltype(&hk_CreateContext) fn_CreateContext;
	extern decltype(&hk_CreateLayerContext) fn_CreateLayerContext;
	extern decltype(&hk_DeleteContext) fn_DeleteContext;
	extern decltype(&hk_DescribeLayerPlane) fn_DescribeLayerPlane;
	extern decltype(&hk_DescribePixelFormat) fn_DescribePixelFormat;
	extern decltype(&hk_GetCurrentContext) fn_GetCurrentContext;
	extern decltype(&hk_GetCurrentDC) fn_GetCurrentDC;
	extern decltype(&hk_GetDefaultProcAddress) fn_GetDefaultProcAddress;
	extern decltype(&hk_GetLayerPaletteEntries) fn_GetLayerPaletteEntries;
	extern decltype(&hk_GetPixelFormat) fn_GetPixelFormat;
	extern decltype(&hk_GetProcAddress) fn_GetProcAddress;
	extern decltype(&hk_MakeCurrent) fn_MakeCurrent;
	extern decltype(&hk_RealizeLayerPalette) fn_RealizeLayerPalette;
	extern decltype(&hk_SetLayerPaletteEntries) fn_SetLayerPaletteEntries;
	extern decltype(&hk_SetPixelFormat) fn_SetPixelFormat;
	extern decltype(&hk_ShareLists) fn_ShareLists;
	extern decltype(&hk_SwapBuffers) fn_SwapBuffers;
	extern decltype(&hk_SwapLayerBuffers) fn_SwapLayerBuffers;
	extern decltype(&hk_SwapMultipleBuffers) fn_SwapMultipleBuffers;
	extern decltype(&hk_UseFontBitmapsA) fn_UseFontBitmapsA;
	extern decltype(&hk_UseFontBitmapsW) fn_UseFontBitmapsW;
	extern decltype(&hk_UseFontOutlinesA) fn_UseFontOutlinesA;
	extern decltype(&hk_UseFontOutlinesW) fn_UseFontOutlinesW;
}

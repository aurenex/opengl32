#include "loader/wgl.h"

decltype(&wgl::hk_ChoosePixelFormat) wgl::fn_ChoosePixelFormat = nullptr;
decltype(&wgl::hk_CopyContext) wgl::fn_CopyContext = nullptr;
decltype(&wgl::hk_CreateContext) wgl::fn_CreateContext = nullptr;
decltype(&wgl::hk_CreateLayerContext) wgl::fn_CreateLayerContext = nullptr;
decltype(&wgl::hk_DeleteContext) wgl::fn_DeleteContext = nullptr;
decltype(&wgl::hk_DescribeLayerPlane) wgl::fn_DescribeLayerPlane = nullptr;
decltype(&wgl::hk_DescribePixelFormat) wgl::fn_DescribePixelFormat = nullptr;
decltype(&wgl::hk_GetCurrentContext) wgl::fn_GetCurrentContext = nullptr;
decltype(&wgl::hk_GetCurrentDC) wgl::fn_GetCurrentDC = nullptr;
decltype(&wgl::hk_GetDefaultProcAddress) wgl::fn_GetDefaultProcAddress = nullptr;
decltype(&wgl::hk_GetLayerPaletteEntries) wgl::fn_GetLayerPaletteEntries = nullptr;
decltype(&wgl::hk_GetPixelFormat) wgl::fn_GetPixelFormat = nullptr;
decltype(&wgl::hk_GetProcAddress) wgl::fn_GetProcAddress = nullptr;
decltype(&wgl::hk_MakeCurrent) wgl::fn_MakeCurrent = nullptr;
decltype(&wgl::hk_RealizeLayerPalette) wgl::fn_RealizeLayerPalette = nullptr;
decltype(&wgl::hk_SetLayerPaletteEntries) wgl::fn_SetLayerPaletteEntries = nullptr;
decltype(&wgl::hk_SetPixelFormat) wgl::fn_SetPixelFormat = nullptr;
decltype(&wgl::hk_ShareLists) wgl::fn_ShareLists = nullptr;
decltype(&wgl::hk_SwapBuffers) wgl::fn_SwapBuffers = nullptr;
decltype(&wgl::hk_SwapLayerBuffers) wgl::fn_SwapLayerBuffers = nullptr;
decltype(&wgl::hk_SwapMultipleBuffers) wgl::fn_SwapMultipleBuffers = nullptr;
decltype(&wgl::hk_UseFontBitmapsA) wgl::fn_UseFontBitmapsA = nullptr;
decltype(&wgl::hk_UseFontBitmapsW) wgl::fn_UseFontBitmapsW = nullptr;
decltype(&wgl::hk_UseFontOutlinesA) wgl::fn_UseFontOutlinesA = nullptr;
decltype(&wgl::hk_UseFontOutlinesW) wgl::fn_UseFontOutlinesW = nullptr;

bool wgl::initialize(HMODULE hModule)
{
	if (!(fn_ChoosePixelFormat = (decltype(fn_ChoosePixelFormat))GetProcAddress(hModule, "wglChoosePixelFormat"))) return false;
	if (!(fn_CopyContext = (decltype(fn_CopyContext))GetProcAddress(hModule, "wglCopyContext"))) return false;
	if (!(fn_CreateContext = (decltype(fn_CreateContext))GetProcAddress(hModule, "wglCreateContext"))) return false;
	if (!(fn_CreateLayerContext = (decltype(fn_CreateLayerContext))GetProcAddress(hModule, "wglCreateLayerContext"))) return false;
	if (!(fn_DeleteContext = (decltype(fn_DeleteContext))GetProcAddress(hModule, "wglDeleteContext"))) return false;
	if (!(fn_DescribeLayerPlane = (decltype(fn_DescribeLayerPlane))GetProcAddress(hModule, "wglDescribeLayerPlane"))) return false;
	if (!(fn_DescribePixelFormat = (decltype(fn_DescribePixelFormat))GetProcAddress(hModule, "wglDescribePixelFormat"))) return false;
	if (!(fn_GetCurrentContext = (decltype(fn_GetCurrentContext))GetProcAddress(hModule, "wglGetCurrentContext"))) return false;
	if (!(fn_GetCurrentDC = (decltype(fn_GetCurrentDC))GetProcAddress(hModule, "wglGetCurrentDC"))) return false;
	if (!(fn_GetDefaultProcAddress = (decltype(fn_GetDefaultProcAddress))GetProcAddress(hModule, "wglGetDefaultProcAddress"))) return false;
	if (!(fn_GetLayerPaletteEntries = (decltype(fn_GetLayerPaletteEntries))GetProcAddress(hModule, "wglGetLayerPaletteEntries"))) return false;
	if (!(fn_GetPixelFormat = (decltype(fn_GetPixelFormat))GetProcAddress(hModule, "wglGetPixelFormat"))) return false;
	if (!(fn_GetProcAddress = (decltype(fn_GetProcAddress))GetProcAddress(hModule, "wglGetProcAddress"))) return false;
	if (!(fn_MakeCurrent = (decltype(fn_MakeCurrent))GetProcAddress(hModule, "wglMakeCurrent"))) return false;
	if (!(fn_RealizeLayerPalette = (decltype(fn_RealizeLayerPalette))GetProcAddress(hModule, "wglRealizeLayerPalette"))) return false;
	if (!(fn_SetLayerPaletteEntries = (decltype(fn_SetLayerPaletteEntries))GetProcAddress(hModule, "wglSetLayerPaletteEntries"))) return false;
	if (!(fn_SetPixelFormat = (decltype(fn_SetPixelFormat))GetProcAddress(hModule, "wglSetPixelFormat"))) return false;
	if (!(fn_ShareLists = (decltype(fn_ShareLists))GetProcAddress(hModule, "wglShareLists"))) return false;
	if (!(fn_SwapBuffers = (decltype(fn_SwapBuffers))GetProcAddress(hModule, "wglSwapBuffers"))) return false;
	if (!(fn_SwapLayerBuffers = (decltype(fn_SwapLayerBuffers))GetProcAddress(hModule, "wglSwapLayerBuffers"))) return false;
	if (!(fn_SwapMultipleBuffers = (decltype(fn_SwapMultipleBuffers))GetProcAddress(hModule, "wglSwapMultipleBuffers"))) return false;
	if (!(fn_UseFontBitmapsA = (decltype(fn_UseFontBitmapsA))GetProcAddress(hModule, "wglUseFontBitmapsA"))) return false;
	if (!(fn_UseFontBitmapsW = (decltype(fn_UseFontBitmapsW))GetProcAddress(hModule, "wglUseFontBitmapsW"))) return false;
	if (!(fn_UseFontOutlinesA = (decltype(fn_UseFontOutlinesA))GetProcAddress(hModule, "wglUseFontOutlinesA"))) return false;
	if (!(fn_UseFontOutlinesW = (decltype(fn_UseFontOutlinesW))GetProcAddress(hModule, "wglUseFontOutlinesW"))) return false;

	return true;
}

int WINAPI wgl::hk_ChoosePixelFormat(HDC hdc, CONST PIXELFORMATDESCRIPTOR* ppfd)
{
	return fn_ChoosePixelFormat(hdc, ppfd);
}

BOOL WINAPI wgl::hk_CopyContext(HGLRC hrcSource, HGLRC hrcDest, UINT fuMask)
{
	return fn_CopyContext(hrcSource, hrcDest, fuMask);
}

HGLRC WINAPI wgl::hk_CreateContext(HDC hdc)
{
	return fn_CreateContext(hdc);
}

HGLRC WINAPI wgl::hk_CreateLayerContext(HDC hdc, int iLayer)
{
	return fn_CreateLayerContext(hdc, iLayer);
}

BOOL WINAPI wgl::hk_DeleteContext(HGLRC hrc)
{
	return fn_DeleteContext(hrc);
}

BOOL WINAPI wgl::hk_DescribeLayerPlane(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd)
{
	return fn_DescribeLayerPlane(hdc, iPixelFormat, iLayerPlane, nBytes, plpd);
}

int WINAPI wgl::hk_DescribePixelFormat(HDC hdc, int ipfd, UINT cjpfd, LPPIXELFORMATDESCRIPTOR ppfd)
{
	return fn_DescribePixelFormat(hdc, ipfd, cjpfd, ppfd);
}

HGLRC WINAPI wgl::hk_GetCurrentContext(VOID)
{
	return fn_GetCurrentContext();
}

HDC WINAPI wgl::hk_GetCurrentDC(VOID)
{
	return fn_GetCurrentDC();
}

PROC WINAPI wgl::hk_GetDefaultProcAddress(LPCSTR lpszProc)
{
	return fn_GetDefaultProcAddress(lpszProc);
}

int WINAPI wgl::hk_GetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF* pcr)
{
	return fn_GetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

int WINAPI wgl::hk_GetPixelFormat(HDC hdc)
{
	return fn_GetPixelFormat(hdc);
}

PROC WINAPI wgl::hk_GetProcAddress(LPCSTR lpszProc)
{
	return fn_GetProcAddress(lpszProc);
}

BOOL WINAPI wgl::hk_MakeCurrent(HDC hdc, HGLRC hrc)
{
	return fn_MakeCurrent(hdc, hrc);
}

BOOL WINAPI wgl::hk_RealizeLayerPalette(HDC hdc, int iLayerPlane, BOOL bRealize)
{
	return fn_RealizeLayerPalette(hdc, iLayerPlane, bRealize);
}

int WINAPI wgl::hk_SetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, CONST COLORREF* pcr)
{
	return fn_SetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

BOOL WINAPI wgl::hk_SetPixelFormat(HDC hdc, int ipfd, CONST PIXELFORMATDESCRIPTOR* ppfd)
{
	return fn_SetPixelFormat(hdc, ipfd, ppfd);
}

BOOL WINAPI wgl::hk_ShareLists(HGLRC hrcSource, HGLRC hrcShare)
{
	return fn_ShareLists(hrcSource, hrcShare);
}

BOOL WINAPI wgl::hk_SwapBuffers(HDC hdc)
{
	return fn_SwapBuffers(hdc);
}

BOOL WINAPI wgl::hk_SwapLayerBuffers(HDC hdc, UINT fuFlags)
{
	return fn_SwapLayerBuffers(hdc, fuFlags);
}

DWORD WINAPI wgl::hk_SwapMultipleBuffers(UINT cBuffers, CONST WGLSWAP* pwswapAll)
{
	return fn_SwapMultipleBuffers(cBuffers, pwswapAll);
}

BOOL WINAPI wgl::hk_UseFontBitmapsA(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	return fn_UseFontBitmapsA(hdc, first, count, listBase);
}

BOOL WINAPI wgl::hk_UseFontBitmapsW(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	return fn_UseFontBitmapsW(hdc, first, count, listBase);
}

BOOL WINAPI wgl::hk_UseFontOutlinesA(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT chordalDeviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	return fn_UseFontOutlinesA(hDC, first, count, listBase, chordalDeviation, extrusion, format, lpgmf);
}

BOOL WINAPI wgl::hk_UseFontOutlinesW(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT chordalDeviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	return fn_UseFontOutlinesW(hDC, first, count, listBase, chordalDeviation, extrusion, format, lpgmf);
}
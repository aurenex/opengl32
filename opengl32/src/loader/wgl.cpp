#include "loader/wgl.h"
#include "thunk/thunk.h"

// #define LOGGER_DISABLE_WGL_OUTPUT
#include "logger/logger.h"

#define LOAD_AND_CHECK(ptr, name) \
    ptr = (decltype(ptr))GetProcAddress(hModule, name); \
    if (!ptr) { PRINT_ERR("'%s' not found at %s:%d", name, __FUNCTION__, __LINE__); return false; }

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
	LOAD_AND_CHECK(fn_ChoosePixelFormat, "wglChoosePixelFormat")
	LOAD_AND_CHECK(fn_CopyContext, "wglCopyContext")
	LOAD_AND_CHECK(fn_CreateContext, "wglCreateContext")
	LOAD_AND_CHECK(fn_CreateLayerContext, "wglCreateLayerContext")
	LOAD_AND_CHECK(fn_DeleteContext, "wglDeleteContext")
	LOAD_AND_CHECK(fn_DescribeLayerPlane, "wglDescribeLayerPlane")
	LOAD_AND_CHECK(fn_DescribePixelFormat, "wglDescribePixelFormat")
	LOAD_AND_CHECK(fn_GetCurrentContext, "wglGetCurrentContext")
	LOAD_AND_CHECK(fn_GetCurrentDC, "wglGetCurrentDC")
	LOAD_AND_CHECK(fn_GetDefaultProcAddress, "wglGetDefaultProcAddress")
	LOAD_AND_CHECK(fn_GetLayerPaletteEntries, "wglGetLayerPaletteEntries")
	LOAD_AND_CHECK(fn_GetPixelFormat, "wglGetPixelFormat")
	LOAD_AND_CHECK(fn_GetProcAddress, "wglGetProcAddress")
	LOAD_AND_CHECK(fn_MakeCurrent, "wglMakeCurrent")
	LOAD_AND_CHECK(fn_RealizeLayerPalette, "wglRealizeLayerPalette")
	LOAD_AND_CHECK(fn_SetLayerPaletteEntries, "wglSetLayerPaletteEntries")
	LOAD_AND_CHECK(fn_SetPixelFormat, "wglSetPixelFormat")
	LOAD_AND_CHECK(fn_ShareLists, "wglShareLists")
	LOAD_AND_CHECK(fn_SwapBuffers, "wglSwapBuffers")
	LOAD_AND_CHECK(fn_SwapLayerBuffers, "wglSwapLayerBuffers")
	LOAD_AND_CHECK(fn_SwapMultipleBuffers, "wglSwapMultipleBuffers")
	LOAD_AND_CHECK(fn_UseFontBitmapsA, "wglUseFontBitmapsA")
	LOAD_AND_CHECK(fn_UseFontBitmapsW, "wglUseFontBitmapsW")
	LOAD_AND_CHECK(fn_UseFontOutlinesA, "wglUseFontOutlinesA")
	LOAD_AND_CHECK(fn_UseFontOutlinesW, "wglUseFontOutlinesW")

	return true;
}

int WINAPI wgl::hk_ChoosePixelFormat(HDC hdc, CONST PIXELFORMATDESCRIPTOR* ppfd)
{
	PRINT_WGL("%s %p %p\n", __FUNCTION__, hdc, ppfd);
	return fn_ChoosePixelFormat(hdc, ppfd);
}

BOOL WINAPI wgl::hk_CopyContext(HGLRC hrcSource, HGLRC hrcDest, UINT fuMask)
{
	PRINT_WGL("%s %p %p %u\n", __FUNCTION__, hrcSource, hrcDest, fuMask);
	return fn_CopyContext(hrcSource, hrcDest, fuMask);
}

HGLRC WINAPI wgl::hk_CreateContext(HDC hdc)
{
	PRINT_WGL("%s %p\n", __FUNCTION__, hdc);
	return fn_CreateContext(hdc);
}

HGLRC WINAPI wgl::hk_CreateLayerContext(HDC hdc, int iLayer)
{
	PRINT_WGL("%s %p %d\n", __FUNCTION__, hdc, iLayer);
	return fn_CreateLayerContext(hdc, iLayer);
}

BOOL WINAPI wgl::hk_DeleteContext(HGLRC hrc)
{
	PRINT_WGL("%s %p\n", __FUNCTION__, hrc);
	return fn_DeleteContext(hrc);
}

BOOL WINAPI wgl::hk_DescribeLayerPlane(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd)
{
	PRINT_WGL("%s %p %d %d %u %p\n", __FUNCTION__, hdc, iPixelFormat, iLayerPlane, nBytes, plpd);
	return fn_DescribeLayerPlane(hdc, iPixelFormat, iLayerPlane, nBytes, plpd);
}

int WINAPI wgl::hk_DescribePixelFormat(HDC hdc, int ipfd, UINT cjpfd, LPPIXELFORMATDESCRIPTOR ppfd)
{
	PRINT_WGL("%s %p %d %u %p\n", __FUNCTION__, hdc, ipfd, cjpfd, ppfd);
	return fn_DescribePixelFormat(hdc, ipfd, cjpfd, ppfd);
}

HGLRC WINAPI wgl::hk_GetCurrentContext(VOID)
{
	PRINT_WGL("%s\n", __FUNCTION__);
	return fn_GetCurrentContext();
}

HDC WINAPI wgl::hk_GetCurrentDC(VOID)
{
	PRINT_WGL("%s\n", __FUNCTION__);
	return fn_GetCurrentDC();
}

PROC WINAPI wgl::hk_GetDefaultProcAddress(LPCSTR lpszProc)
{
	// Thunk generation not implemented for now
	// Calls via those pointers won't be intercepted

	PRINT_WGL("%s %s\n", __FUNCTION__, lpszProc);
	return fn_GetDefaultProcAddress(lpszProc);
}

int WINAPI wgl::hk_GetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF* pcr)
{
	PRINT_WGL("%s %p %d %d %d %p\n", __FUNCTION__, hdc, iLayerPlane, iStart, cEntries, pcr);
	return fn_GetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

int WINAPI wgl::hk_GetPixelFormat(HDC hdc)
{
	PRINT_WGL("%s %p\n", __FUNCTION__, hdc);
	return fn_GetPixelFormat(hdc);
}

PROC WINAPI wgl::hk_GetProcAddress(LPCSTR lpszProc)
{
	// Thunk generation not implemented for now
	// Calls via those pointers won't be intercepted

	PRINT_WGL("%s %s\n", __FUNCTION__, lpszProc);
	return fn_GetProcAddress(lpszProc);
}

BOOL WINAPI wgl::hk_MakeCurrent(HDC hdc, HGLRC hrc)
{
	PRINT_WGL("%s %p %p\n", __FUNCTION__, hdc, hrc);
	return fn_MakeCurrent(hdc, hrc);
}

BOOL WINAPI wgl::hk_RealizeLayerPalette(HDC hdc, int iLayerPlane, BOOL bRealize)
{
	PRINT_WGL("%s %p %d %d\n", __FUNCTION__, hdc, iLayerPlane, bRealize);
	return fn_RealizeLayerPalette(hdc, iLayerPlane, bRealize);
}

int WINAPI wgl::hk_SetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, CONST COLORREF* pcr)
{
	PRINT_WGL("%s %p %d %d %d %p\n", __FUNCTION__, hdc, iLayerPlane, iStart, cEntries, pcr);
	return fn_SetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

BOOL WINAPI wgl::hk_SetPixelFormat(HDC hdc, int ipfd, CONST PIXELFORMATDESCRIPTOR* ppfd)
{
	PRINT_WGL("%s %p %d %p\n", __FUNCTION__, hdc, ipfd, ppfd);
	return fn_SetPixelFormat(hdc, ipfd, ppfd);
}

BOOL WINAPI wgl::hk_ShareLists(HGLRC hrcSource, HGLRC hrcShare)
{
	PRINT_WGL("%s %p %p\n", __FUNCTION__, hrcSource, hrcShare);
	return fn_ShareLists(hrcSource, hrcShare);
}

BOOL WINAPI wgl::hk_SwapBuffers(HDC hdc)
{
	PRINT_WGL("%s %p\n", __FUNCTION__, hdc);
	return fn_SwapBuffers(hdc);
}

BOOL WINAPI wgl::hk_SwapLayerBuffers(HDC hdc, UINT fuFlags)
{
	PRINT_WGL("%s %p %u\n", __FUNCTION__, hdc, fuFlags);
	return fn_SwapLayerBuffers(hdc, fuFlags);
}

DWORD WINAPI wgl::hk_SwapMultipleBuffers(UINT cBuffers, CONST WGLSWAP* pwswapAll)
{
	PRINT_WGL("%s %u %p\n", __FUNCTION__, cBuffers, pwswapAll);
	return fn_SwapMultipleBuffers(cBuffers, pwswapAll);
}

BOOL WINAPI wgl::hk_UseFontBitmapsA(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	PRINT_WGL("%s %p %u %u %u\n", __FUNCTION__, hdc, first, count, listBase);
	return fn_UseFontBitmapsA(hdc, first, count, listBase);
}

BOOL WINAPI wgl::hk_UseFontBitmapsW(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	PRINT_WGL("%s %p %u %u %u\n", __FUNCTION__, hdc, first, count, listBase);
	return fn_UseFontBitmapsW(hdc, first, count, listBase);
}

BOOL WINAPI wgl::hk_UseFontOutlinesA(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT chordalDeviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	PRINT_WGL("%s %p %u %u %u %f %f %d %p\n", __FUNCTION__, hDC, first, count, listBase, chordalDeviation, extrusion, format, lpgmf);
	return fn_UseFontOutlinesA(hDC, first, count, listBase, chordalDeviation, extrusion, format, lpgmf);
}

BOOL WINAPI wgl::hk_UseFontOutlinesW(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT chordalDeviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	PRINT_WGL("%s %p %u %u %u %f %f %d %p\n", __FUNCTION__, hDC, first, count, listBase, chordalDeviation, extrusion, format, lpgmf);
	return fn_UseFontOutlinesW(hDC, first, count, listBase, chordalDeviation, extrusion, format, lpgmf);
}
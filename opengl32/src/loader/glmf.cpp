#include "loader/glmf.h"

// #define LOGGER_DISABLE_GLMF_OUTPUT
#include "logger/logger.h"

#define LOAD_AND_CHECK(ptr, name) \
    ptr = (decltype(ptr))GetProcAddress(hModule, name); \
    if (!ptr) { PRINT_ERR("'%s' not found at %s:%d", name, __FUNCTION__, __LINE__); return false; }

decltype(&glmf::hk_BeginGlsBlock) glmf::fn_BeginGlsBlock = nullptr;
decltype(&glmf::hk_CloseMetaFile) glmf::fn_CloseMetaFile = nullptr;
decltype(&glmf::hk_EndGlsBlock) glmf::fn_EndGlsBlock = nullptr;
decltype(&glmf::hk_EndPlayback) glmf::fn_EndPlayback = nullptr;
decltype(&glmf::hk_InitPlayback) glmf::fn_InitPlayback = nullptr;
decltype(&glmf::hk_PlayGlsRecord) glmf::fn_PlayGlsRecord = nullptr;

bool glmf::initialize(HMODULE hModule)
{
	LOAD_AND_CHECK(fn_PlayGlsRecord, "GlmfPlayGlsRecord")
	LOAD_AND_CHECK(fn_InitPlayback, "GlmfInitPlayback")
	LOAD_AND_CHECK(fn_EndPlayback, "GlmfEndPlayback")
	LOAD_AND_CHECK(fn_EndGlsBlock, "GlmfEndGlsBlock")
	LOAD_AND_CHECK(fn_CloseMetaFile, "GlmfCloseMetaFile")
	LOAD_AND_CHECK(fn_BeginGlsBlock, "GlmfBeginGlsBlock")
	
	return true;
}

BOOL WINAPI glmf::hk_BeginGlsBlock(HDC hdc)
{
	PRINT_GLMF("%s %p\n", __FUNCTION__, hdc);
	return fn_BeginGlsBlock(hdc);
}

BOOL WINAPI glmf::hk_CloseMetaFile(HDC hdc)
{
	PRINT_GLMF("%s %p\n", __FUNCTION__, hdc);
	return fn_CloseMetaFile(hdc);
}

BOOL WINAPI glmf::hk_EndGlsBlock(HDC hdc)
{
	PRINT_GLMF("%s %p\n", __FUNCTION__, hdc);
	return fn_EndGlsBlock(hdc);
}

BOOL WINAPI glmf::hk_EndPlayback(HDC hdc)
{
	PRINT_GLMF("%s %p\n", __FUNCTION__, hdc);
	return fn_EndPlayback(hdc);
}

BOOL WINAPI glmf::hk_InitPlayback(HDC hdc, ENHMETAHEADER* pemh, LPRECTL prclDest)
{
	PRINT_GLMF("%s %p %p %p\n", __FUNCTION__, hdc, pemh, prclDest);
	return fn_InitPlayback(hdc, pemh, prclDest);
}

BOOL WINAPI glmf::hk_PlayGlsRecord(HDC hdc, DWORD cb, BYTE* pb, LPRECTL prclBounds)
{
	PRINT_GLMF("%s %p %u %p %p\n", __FUNCTION__, hdc, cb, pb, prclBounds);
	return fn_PlayGlsRecord(hdc, cb, pb, prclBounds);
}
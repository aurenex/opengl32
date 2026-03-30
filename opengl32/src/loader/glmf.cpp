#include "loader/glmf.h"
#include "logger/logger.h"

decltype(&glmf::hk_BeginGlsBlock) glmf::fn_BeginGlsBlock = nullptr;
decltype(&glmf::hk_CloseMetaFile) glmf::fn_CloseMetaFile = nullptr;
decltype(&glmf::hk_EndGlsBlock) glmf::fn_EndGlsBlock = nullptr;
decltype(&glmf::hk_EndPlayback) glmf::fn_EndPlayback = nullptr;
decltype(&glmf::hk_InitPlayback) glmf::fn_InitPlayback = nullptr;
decltype(&glmf::hk_PlayGlsRecord) glmf::fn_PlayGlsRecord = nullptr;

bool glmf::initialize(HMODULE hModule)
{
	if (!(fn_BeginGlsBlock = (decltype(fn_BeginGlsBlock))GetProcAddress(hModule, "GlmfBeginGlsBlock"))) return false;
	if (!(fn_CloseMetaFile = (decltype(fn_CloseMetaFile))GetProcAddress(hModule, "GlmfCloseMetaFile"))) return false;
	if (!(fn_EndGlsBlock = (decltype(fn_EndGlsBlock))GetProcAddress(hModule, "GlmfEndGlsBlock"))) return false;
	if (!(fn_EndPlayback = (decltype(fn_EndPlayback))GetProcAddress(hModule, "GlmfEndPlayback"))) return false;
	if (!(fn_InitPlayback = (decltype(fn_InitPlayback))GetProcAddress(hModule, "GlmfInitPlayback"))) return false;
	if (!(fn_PlayGlsRecord = (decltype(fn_PlayGlsRecord))GetProcAddress(hModule, "GlmfPlayGlsRecord"))) return false;
	
	return true;
}

BOOL WINAPI glmf::hk_BeginGlsBlock(HDC hdc)
{
	logger::print("%s %p\n", __FUNCTION__, hdc);
	return fn_BeginGlsBlock(hdc);
}

BOOL WINAPI glmf::hk_CloseMetaFile(HDC hdc)
{
	logger::print("%s %p\n", __FUNCTION__, hdc);
	return fn_CloseMetaFile(hdc);
}

BOOL WINAPI glmf::hk_EndGlsBlock(HDC hdc)
{
	logger::print("%s %p\n", __FUNCTION__, hdc);
	return fn_EndGlsBlock(hdc);
}

BOOL WINAPI glmf::hk_EndPlayback(HDC hdc)
{
	logger::print("%s %p\n", __FUNCTION__, hdc);
	return fn_EndPlayback(hdc);
}

BOOL WINAPI glmf::hk_InitPlayback(HDC hdc, ENHMETAHEADER* pemh, LPRECTL prclDest)
{
	logger::print("%s %p %p %p\n", __FUNCTION__, hdc, pemh, prclDest);
	return fn_InitPlayback(hdc, pemh, prclDest);
}

BOOL WINAPI glmf::hk_PlayGlsRecord(HDC hdc, DWORD cb, BYTE* pb, LPRECTL prclBounds)
{
	logger::print("%s %p %u %p %p\n", __FUNCTION__, hdc, cb, pb, prclBounds);
	return fn_PlayGlsRecord(hdc, cb, pb, prclBounds);
}
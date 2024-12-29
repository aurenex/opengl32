#pragma once

#include <Windows.h>

namespace glmf
{
	bool initialize(HMODULE hModule);

	BOOL WINAPI hk_BeginGlsBlock(HDC hdc);
	BOOL WINAPI hk_CloseMetaFile(HDC hdc);
	BOOL WINAPI hk_EndGlsBlock(HDC hdc);
	BOOL WINAPI hk_EndPlayback(HDC hdc);
	BOOL WINAPI hk_InitPlayback(HDC hdc, ENHMETAHEADER* pemh, LPRECTL prclDest);
	BOOL WINAPI hk_PlayGlsRecord(HDC hdc, DWORD cb, BYTE* pb, LPRECTL prclBounds);

	extern decltype(&hk_BeginGlsBlock) fn_BeginGlsBlock;
	extern decltype(&hk_CloseMetaFile) fn_CloseMetaFile;
	extern decltype(&hk_EndGlsBlock) fn_EndGlsBlock;
	extern decltype(&hk_EndPlayback) fn_EndPlayback;
	extern decltype(&hk_InitPlayback) fn_InitPlayback;
	extern decltype(&hk_PlayGlsRecord) fn_PlayGlsRecord;
}
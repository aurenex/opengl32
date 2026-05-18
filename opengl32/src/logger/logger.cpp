#include "logger/logger.h"

void logger::initialize()
{
#ifdef _DEBUG
	AllocConsole();
	SetConsoleTitleA("OpenGL API Logger");

	FILE* fDummy = nullptr;
	freopen_s(&fDummy, "CONIN$", "r", stdin);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
	freopen_s(&fDummy, "CONOUT$", "w", stdout);

	logger::print("[~] Logger initialized!\n");
#endif
}

void logger::shutdown()
{
#ifdef _DEBUG
	FreeConsole();
#endif
}

void logger::print(const char* fmt, ...)
{
#ifdef _DEBUG
	va_list args;
	va_start(args, fmt);
	vprintf(fmt, args);
	va_end(args);
#endif
}
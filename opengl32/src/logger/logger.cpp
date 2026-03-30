#include "logger/logger.h"

void logger::initialize()
{
	AllocConsole();

	FILE* fDummy = nullptr;
	freopen_s(&fDummy, "CONIN$", "r", stdin);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
	freopen_s(&fDummy, "CONOUT$", "w", stdout);
}

void logger::shutdown()
{
	FreeConsole();
}

void logger::print(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	vprintf(fmt, args);
	va_end(args);
}
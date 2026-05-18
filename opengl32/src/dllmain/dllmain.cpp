#include <Windows.h>

#include "logger/logger.h"
#include "loader/loader.h"

// You can cut out any GL/WGL/GLMF function and paste it here
// This won't break the logic
// Don't forget to include the appropriate header file

BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD fdwReason, LPVOID lpReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		logger::initialize();
		return loader::initialize();

	case DLL_PROCESS_DETACH:
		logger::shutdown();
		return loader::shutdown();
	}

	return TRUE;
}
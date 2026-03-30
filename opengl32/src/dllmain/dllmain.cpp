#include <Windows.h>

#include "loader/loader.h"

BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD fdwReason, LPVOID lpReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		return loader::initialize();

	case DLL_PROCESS_DETACH:
		return loader::shutdown();
	}

	return TRUE;
}
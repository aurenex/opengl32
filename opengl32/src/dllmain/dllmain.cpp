#include <Windows.h>

#include "loader/loader.h"

#include "glm/include/glm.hpp"
#include "glm/include/gtc/type_ptr.hpp"

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
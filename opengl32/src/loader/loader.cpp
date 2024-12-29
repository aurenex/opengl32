#include <Windows.h>

#include "loader/loader.h"

#include "loader/gl.h"
#include "loader/glmf.h"
#include "loader/wgl.h"

#define LIBRARY_PATH \
	LR"(%systemroot%\system32\opengl32.dll)"

HMODULE g_module_handle = nullptr;

bool loader::initialize()
{
	wchar_t path[MAX_PATH] {};

	if (!ExpandEnvironmentStringsW(LIBRARY_PATH, path, MAX_PATH))
		return false;

	g_module_handle = LoadLibraryW(path);

	if (!g_module_handle)
		return false;

	return (glmf::initialize(g_module_handle) and
			gl::initialize(g_module_handle) and
			wgl::initialize(g_module_handle));
}

bool loader::shutdown()
{
	return (g_module_handle ? FreeLibrary(g_module_handle) : true);
}
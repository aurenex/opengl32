#pragma once

#include <Windows.h>
#include <stdio.h>

#ifndef LOGGER_DISABLE_GLMF_OUTPUT
#define PRINT_GLMF(...) logger::print(__VA_ARGS__)
#else 
#define PRINT_GLMF(...) ((void)0)
#endif

#ifndef LOGGER_DISABLE_GL_OUTPUT
#define PRINT_GL(...) logger::print(__VA_ARGS__)
#else 
#define PRINT_GL(...) ((void)0)
#endif

#ifndef LOGGER_DISABLE_WGL_OUTPUT
#define PRINT_WGL(...) logger::print(__VA_ARGS__)
#else 
#define PRINT_WGL(...) ((void)0)
#endif

#ifndef LOGGER_DISABLE_ERR_OUTPUT
#define PRINT_ERR(...) logger::print(__VA_ARGS__)
#else
#define PRINT_ERR(...) ((void)0)
#endif

namespace logger
{
	void initialize();
	void shutdown();
	void print(const char* fmt, ...);
}
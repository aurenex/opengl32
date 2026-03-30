#pragma once

#include <Windows.h>
#include <stdio.h>

namespace logger
{
	void initialize();
	void shutdown();
	void print(const char* fmt, ...);
}
#pragma once

#include "config.h"

#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

struct AssetsPathInitializer
{
	AssetsPathInitializer(char* argv0)
	{	
		fs::current_path(fs::path(argv0).parent_path());

		std::cout << "Initialized current path: " << fs::current_path() << std::endl;
	}
};



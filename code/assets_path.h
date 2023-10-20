#pragma once

#include "config.h"

#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

struct AssetsPathInitializer
{
	AssetsPathInitializer(char* argv0)
	{	
		auto argv0Path = fs::path(argv0);
		if (argv0Path.is_absolute())
		{
			fs::current_path(argv0Path.parent_path());
		}

		std::cout << "Initialized current path: " << fs::current_path() << std::endl;
	}
};



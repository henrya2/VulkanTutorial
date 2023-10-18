#pragma once

#include "config.h"

#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

struct AssetsPathInitializer
{
	AssetsPathInitializer()
	{
		fs::current_path(ASSETS_HOMEPATH);

		std::cout << "Initialized current path: " << fs::current_path() << std::endl;
	}
};

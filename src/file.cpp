

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include "texture.h"
#include "file.h"
#include "filestore.h"



File::File(std::string file_path)
{
	path = file_path;
	texture = NULL;

	// std::cout << "path: " << path << std::endl;

}

File::~File()
{
	if(texture != NULL)
	{
		delete texture;
	}
}

std::string File::get_file_path()
{
	return path;
}

void File::set_file_path(std::string new_path)
{

}
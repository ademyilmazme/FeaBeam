#pragma once
#include "FeMaterial.h"
#include <map>

class FeMaterialCollection:public std::map<int,FeMaterial>
{
	//add material to collection
	void AddMaterial(int Id,FeMaterial material);
};


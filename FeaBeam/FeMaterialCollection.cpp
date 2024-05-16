#include "FeMaterialCollection.h"

void FeMaterialCollection::AddMaterial(int Id, FeMaterial material)
{
	this->insert(std::pair<int, FeMaterial>(Id, material));
}
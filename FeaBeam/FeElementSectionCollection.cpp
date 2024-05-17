#include "FeElementSectionCollection.h"

void FeElementSectionCollection::AddSection(int id, FeElementSection value)
{
	this->insert(std::pair<int, FeElementSection>(id, value));
}

void FeElementSectionCollection::RemoveSection(int id)
{
	this->erase(id);
}
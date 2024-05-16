#include "FeElementCollection.h"
#include <iostream>

void FeElementCollection::AddElement(int id, std::vector<int> nodeIds)
{
	FeElement element(id, nodeIds);
	this->push_back(element);
}
	
void FeElementCollection::RemoveElement(int id)
{
	for (int i = 0; i < this->size(); i++)
	{
		if (this->at(i).Id == id)
		{
			this->erase(this->begin() + i);
			break;
		}
	}
}

FeElement* FeElementCollection::GetElement(int id)
{
	for (int i = 0; i < this->size(); i++)
	{
		if (this->at(i).Id == id)
		{
			return &this->at(i);
		}
	}
	return nullptr;
}

int FeElementCollection::GetElementCount()
{
	return this->size();
}


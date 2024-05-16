#include "FeNodeCollection.h"
#include <iostream>
void FeNodeCollection::AddNode(int id, double x, double y, double z)
{
	FeNode node(id, x, y, z);
	this->push_back(node);
}
void FeNodeCollection::RemoveNode(int id)
{
	for (int i = 0; i < this->size(); i++)
	{
		if (this->at(i).id == id)
		{
			this->erase(this->begin() + i);
			break;
		}
	}
}
FeNode* FeNodeCollection::GetNode(int id)
{
	for (int i = 0; i < this->size(); i++)
	{
		if (this->at(i).id == id)
		{
			return &this->at(i);
		}
	}
	return nullptr;
}
int FeNodeCollection::GetNodeCount()
{
	return this->size();
}
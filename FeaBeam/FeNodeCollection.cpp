#include "FeNodeCollection.h"
#include <iostream>

void FeNodeCollection::AddNode(int Id, FeNode value) {
	this->insert(std::pair<int, FeNode>(Id, value));

}

void FeNodeCollection::RemoveNode(int id)
{
	this->erase(id);
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
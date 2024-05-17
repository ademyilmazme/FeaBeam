#pragma once
#include "FeNodeCollection.h"
#include "FeElementCollection.h"
class MeshData
{
public:
	FeNodeCollection Nodes;
	FeElementCollection Elements;

	void AddNode(FeNode node);
	void AddNode(int id, double x, double y, double z);
	void AddElement(FeElement);
	FeNode* GetNode(int id);
	FeElement* GetElement(int id);

};


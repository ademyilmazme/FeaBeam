#pragma once
#include "FeNode.h"
#include <vector>
class FeNodeCollection: public std::vector<FeNode>
{
	//add a node to the collection
	void AddNode(int id, double x, double y, double z);
	//remove a node from the collection
	void RemoveNode(int id);
	//get a node in the collection
	FeNode* GetNode(int id);
	//get the number of nodes in the collection
	int GetNodeCount();
	

};


#pragma once
#include "FeNodeCollection.h"
#include "FeElementCollection.h"
class FEA
{
private:
	FeNodeCollection _nodes;
	FeElementCollection _elements;
public:
	void AddNode(int number, double x, double y, double z);
	void AddElement(int number, FeElement& element);
	int GetNodeCount();
	int GetElementCount();
	
};


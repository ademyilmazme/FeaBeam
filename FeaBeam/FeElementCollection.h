#pragma once
#include "FeElement.h"
#include <vector>
class FeElementCollection: public std::vector<FeElement>
{
	//add an element to the collection
	void AddElement(int id, std::vector<int> nodeIds);
	//remove an element from the collection
	void RemoveElement(int id);
	//get an element in the collection
	FeElement* GetElement(int id);
	//get the number of elements in the collection
	int GetElementCount();
};


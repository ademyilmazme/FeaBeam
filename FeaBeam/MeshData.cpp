#include "MeshData.h"

void MeshData::AddNode(FeNode node)
{
	Nodes.AddNode(node.id, node);
}

void MeshData::AddNode(int id, double x, double y, double z)
{
	FeNode node(id, x, y, z);
	Nodes.AddNode(id, node);
}

void MeshData::AddElement(FeElement element)
{
	Elements.AddElement(element.Id, element);
}

FeNode* MeshData::GetNode(int id)
{
	return Nodes.GetNode(id);
}

FeElement* MeshData::GetElement(int id)
{
	return Elements.GetElement(id);
}
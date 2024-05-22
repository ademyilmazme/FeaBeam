#include "FEA.h"

void FEA::AddNode(int number, double x, double y, double z)
{
    FeNode newNode(number, x, y, z);
    _nodes[number] = newNode;
}

void FEA::AddElement(int number, FeElement& element)
{
    _elements[number] = element;
}
int FEA::GetNodeCount() {
    return _nodes.GetNodeCount();
}
int FEA::GetElementCount() {
    return _elements.GetElementCount();
}
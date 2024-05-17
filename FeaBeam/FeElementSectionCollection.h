#pragma once
#include <map>
#include "FeElementSection.h"

class FeElementSectionCollection : public std::map<int, FeElementSection>
{
void AddSection(int id, FeElementSection value);
void RemoveSection(int id);
};


#pragma once

enum class SectionGroupType
{
	Unknown,
	Beam,
	Shell,
	Solid
};

enum class SectionType
{
	Generic,
	CircularSolid,
	CircularHollow
};
class FeElementSection
{
public:
	int Id;
	SectionGroupType GroupType;
	SectionType Type;
};


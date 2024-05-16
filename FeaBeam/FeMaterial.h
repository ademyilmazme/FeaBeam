#pragma once

//create enum for material type
enum class MaterialType
{
	Isotropic,
	Ortotropic,
	None
};
class FeMaterial
{
public:
	int Id;
	MaterialType Type;
};


#pragma once
#include "FeMaterial.h"

class IsotropicMaterial:public FeMaterial
{
public:
	MaterialType Type = MaterialType::Isotropic;
	double E = 200000;
	double v = 0.3;
	double G;
	IsotropicMaterial();
	IsotropicMaterial(double E, double v);
	void SetShearModulus();

};


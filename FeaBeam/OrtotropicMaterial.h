#pragma once
#include "FeMaterial.h"
class OrtotropicMaterial:public FeMaterial
{
public:
	MaterialType Type = MaterialType::Ortotropic;
	double Ex;
	double Ey;
	double Ez;
	double Vxy;
	double Vyz;
	double Vxz;
	double Gxy;
	double Gyz;
	double Gxz;

	OrtotropicMaterial(double Ex, double Ey, double Ez, double Vxy, double Vyz, double Vxz, double Gxy, double Gyz, double Gxz);


};



#include "IsotropicMaterial.h"

IsotropicMaterial::IsotropicMaterial()
{
	SetShearModulus();
}

IsotropicMaterial::IsotropicMaterial(double E, double v)
{
	this->E = E;
	this->v = v;
	SetShearModulus();
}

void IsotropicMaterial::SetShearModulus()
{
	this->G = E / (2 * (1 + v));
}
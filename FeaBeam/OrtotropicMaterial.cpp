#include "OrtotropicMaterial.h"


OrtotropicMaterial::OrtotropicMaterial(double Ex, double Ey, double Ez, double Vxy, double Vyz, double Vxz, double Gxy, double Gyz, double Gxz)
{
	this->Ex = Ex;
	this->Ey = Ey;
	this->Ez = Ez;
	this->Vxy = Vxy;
	this->Vyz = Vyz;
	this->Vxz = Vxz;
	this->Gxy = Gxy;
	this->Gyz = Gyz;
	this->Gxz = Gxz;
}
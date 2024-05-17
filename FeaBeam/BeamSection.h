#pragma once
#include "FeElementSection.h"
class BeamSection: public FeElementSection
{
public:
    double Area;
    double Ix;
    double Iy;
    double Iz;
    SectionGroupType SectionGroupType = SectionGroupType::Beam;
    SectionType SectionType = SectionType::Generic;
};


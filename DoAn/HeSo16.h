#pragma once
#include "HeSo.h"
class HeSo16 : public HeSo
{
public:
	HeSo16();
	HeSo16(string);
	HeSo2 toBin();
	HeSo8 toOctal();
	HeSo10 toDec();
	HeSo16 operator+(HeSo16);
	HeSo16 operator-(HeSo16);
	HeSo16 operator*(HeSo16);
	HeSo16 operator/(HeSo16);
};


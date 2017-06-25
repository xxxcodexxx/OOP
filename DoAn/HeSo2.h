#pragma once
#include "HeSo.h"
class HeSo2 : public HeSo
{
	public:
		HeSo2();
		HeSo2(string);
		HeSo8 toOctal();
		HeSo10 toDec();
		HeSo16 toHex();
		HeSo2 operator+(HeSo2);
		HeSo2 operator-(HeSo2);
		HeSo2 operator*(HeSo2);
		HeSo2 operator/(HeSo2);
};

	


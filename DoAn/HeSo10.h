#pragma once
#include "HeSo.h"
class HeSo10 : public HeSo
{
public:
	HeSo10();
	HeSo10(string);
	HeSo2 toBin();
	HeSo8 toOctal();
	HeSo16 toHex();
	HeSo10 operator+(HeSo10);
	HeSo10 operator-(HeSo10);
	HeSo10 operator*(HeSo10);
	HeSo10 operator/(HeSo10);
};
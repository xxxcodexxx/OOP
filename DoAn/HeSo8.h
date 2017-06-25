#pragma once
#include "HeSo.h"
using namespace std;
class HeSo8 :public HeSo
{
	public:
		HeSo8();
		HeSo8(string);
		HeSo2 toBin();
		HeSo10 toDec();
		HeSo16 toHex();
		HeSo8 operator+(HeSo8);
		HeSo8 operator-(HeSo8);
		HeSo8 operator*(HeSo8);
		HeSo8 operator/(HeSo8);
};
	


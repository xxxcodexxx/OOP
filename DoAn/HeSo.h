#pragma once
#include <string>
using namespace std;
class HeSo
{
protected:
	int heSo;
	string value;
	void convertToNotDec(int);
	void convertToDec();
public:
	void setVal(string val);
	string getVal();
	int getHeSo();
};
class HeSo2;
class HeSo8;
class HeSo10;
class HeSo16;



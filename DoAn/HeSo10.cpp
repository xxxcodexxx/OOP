#include "LibHeSo.h"
HeSo10::HeSo10() {
	this->value = "";
	this->heSo = 10;
}
HeSo10::HeSo10(string val) {
	this->value = val;
	this->heSo = 10;
}
HeSo2 HeSo10::toBin() {
	this->convertToNotDec(2);
	return *(HeSo2*)this;
}
HeSo8 HeSo10::toOctal() {
	this->convertToNotDec(8);
	return *(HeSo8*)this;
}
HeSo16 HeSo10::toHex() {
	this->convertToNotDec(16);
	return *(HeSo16*)this;
}

HeSo10 HeSo10::operator+(HeSo10 Dec) {
	HeSo10 temp;
	int val = stoul(Dec.getVal()) + stoul(this->getVal());
	temp.setVal(to_string(val));
	return temp;
}
HeSo10 HeSo10::operator-(HeSo10 Dec) {
	HeSo10 temp;
	int val = stoul(Dec.getVal()) - stoul(this->getVal());
	temp.setVal(to_string(val));
	return temp;
}
HeSo10 HeSo10::operator*(HeSo10 Dec) {
	HeSo10 temp;
	int val = stoul(Dec.getVal()) * stoul(this->getVal());
	temp.setVal(to_string(val));
	return temp;
}
HeSo10 HeSo10::operator/(HeSo10 Dec) {
	HeSo10 temp;
	int val = stoul(Dec.getVal()) / stoul(this->getVal());
	temp.setVal(to_string(val));
	return temp;
}
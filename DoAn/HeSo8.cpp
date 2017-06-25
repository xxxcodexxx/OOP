#include "LibHeSo.h"
HeSo8::HeSo8() {
	this->value = "";
	this->heSo = 8;
}
HeSo8::HeSo8(string val) {
	this->value = val;
	this->heSo = 8;
}
HeSo2 HeSo8::toBin() {
	this->convertToDec();
	this->convertToNotDec(2);
	return *(HeSo2*)this;
}
HeSo10 HeSo8::toDec() {
	this->convertToDec();
	return *(HeSo10*)this;
}
HeSo16 HeSo8::toHex() {
	this->convertToDec();
	this->convertToNotDec(16);
	return *(HeSo16*)this;
}

HeSo8 HeSo8::operator+(HeSo8 octal) {
	octal.toDec();
	HeSo10 temp;
	int val = stoul(octal.getVal()) + stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(8);
	return temp.toOctal();
}
HeSo8 HeSo8::operator-(HeSo8 octal) {
	octal.toDec();
	HeSo10 temp;
	int val = stoul(octal.getVal()) - stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(8);
	return temp.toOctal();
}
HeSo8 HeSo8::operator*(HeSo8 octal) {
	octal.toDec();
	HeSo10 temp;
	int val = stoul(octal.getVal()) * stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(8);
	return temp.toOctal();
}
HeSo8 HeSo8::operator/(HeSo8 octal) {
	octal.toDec();
	HeSo10 temp;
	int val = stoul(octal.getVal()) / stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(8);
	return temp.toOctal();
}
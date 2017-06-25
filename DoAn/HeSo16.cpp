#include "LibHeSo.h"
HeSo16::HeSo16() {
	this->value = "";
	this->heSo = 16;
}
HeSo16::HeSo16(string val) {
	this->value = val;
	this->heSo = 16;
}
HeSo2 HeSo16::toBin() {
	this->convertToDec();
	this->convertToNotDec(2);
	return *(HeSo2*)this;
}
HeSo8 HeSo16::toOctal() {
	this->convertToDec();
	this->convertToNotDec(16);
	return *(HeSo8*)this;
}
HeSo10 HeSo16::toDec(){ 
	this->convertToDec();
	return *(HeSo10*)this;
}
HeSo16 HeSo16::operator+(HeSo16 hex) {
	hex.toDec();
	HeSo10 temp;
	int val = stoul(hex.getVal()) + stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(16);
	return temp.toHex();
}
HeSo16 HeSo16::operator-(HeSo16 hex) {
	hex.toDec();
	HeSo10 temp;
	int val = stoul(hex.getVal()) - stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(16);
	return temp.toHex();
}

HeSo16 HeSo16::operator*(HeSo16 hex) {
	hex.toDec();
	HeSo10 temp;
	int val = stoul(hex.getVal()) * stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(16);
	return temp.toHex();
}
HeSo16 HeSo16::operator/(HeSo16 hex) {
	hex.toDec();
	HeSo10 temp;
	int val = stoul(hex.getVal()) / stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(16);
	return temp.toHex();
}



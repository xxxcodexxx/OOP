#include "LibHeSo.h"
HeSo2::HeSo2() {
	this->value = "";
	this->heSo = 2;
}
HeSo2::HeSo2(string val) {
	this->value = val;
	this->heSo = 2;
}
HeSo8 HeSo2::toOctal() {
	this->convertToDec();
	this->convertToNotDec(8);
	return HeSo8(value);
}
HeSo10 HeSo2::toDec() {
	this->convertToDec();
	return *(HeSo10*)this;
}
HeSo16 HeSo2::toHex() {
	this->convertToDec();
	this->convertToNotDec(16);
	return *(HeSo16*)this;
}

HeSo2 HeSo2::operator+(HeSo2 binary) {
	binary.toDec();
	HeSo10 temp;
	this->toDec();
	int val = stoul(binary.getVal()) + stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(2);
	return temp.toBin();
}
HeSo2 HeSo2::operator-(HeSo2 binary) {
	binary.toDec();
	HeSo10 temp;
	this->toDec();
	int val = stoul(binary.getVal()) - stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(2);
	return temp.toBin();
}
HeSo2 HeSo2::operator*(HeSo2 binary) {
	binary.toDec();
	HeSo10 temp;
	this->toDec();
	int val = stoul(binary.getVal()) * stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(2);
	return temp.toBin();
}
HeSo2 HeSo2::operator/(HeSo2 binary) {
	binary.toDec();
	HeSo10 temp;
	this->toDec();
	int val = stoul(binary.getVal()) / stoul(this->getVal());
	temp.setVal(to_string(val));
	this->convertToNotDec(2);
	return temp.toBin();
}
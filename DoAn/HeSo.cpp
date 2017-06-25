#include "HeSo.h"
#include "Stack.h"

string HeSo::getVal() {
	return this->value;
}
void HeSo::setVal(string val) {
	this->value = val;
}
int HeSo::getHeSo() {
	return this->heSo;
}
//chuyen tu he 10 sang cac he so khac
void HeSo::convertToNotDec(int coSo) {
	Stack stack(100);
	char heso[17] = "0123456789ABCDEF";
	int val = atoi(this->value.c_str());
	do {
		stack.Push(heso[val%coSo]);
		val = val / coSo;
	} while (val != 0);
	value = "";
	while (!stack.emptyStack())
		value += stack.Pop();
}
// chuyen tu he so bat ky sang he 10
void HeSo::convertToDec() {
	int sum = 0;
	char heso[17] = "0123456789abcdef";
	int len = this->value.length();

	int n = strlen(heso);
	for (int i = 0; i<=len-1; i++) {
		for (int j = 0; j< n; j++) {
			if (value[i] == heso[j]) {
				sum += j*pow(heSo, len-1-i);
				break;
			}
		}
	}
	value = to_string(sum);
}

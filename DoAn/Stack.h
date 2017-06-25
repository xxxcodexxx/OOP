#pragma once
#include<string>
using namespace std;
class Stack
{
private:
	int kichthuoc;
	int top;
	char* data;
public:
	Stack();
	Stack(int);
	~Stack();
	bool emptyStack();
	bool fullStack();
	void Push(char);
	int Pop();
};


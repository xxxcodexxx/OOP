#include "Stack.h"
#include"stdlib.h"

Stack::Stack()
{

}
Stack::Stack(int kichthuoc)
{
	top = -1;
	this->kichthuoc = kichthuoc;
	data = new char[this->kichthuoc];
}
Stack::~Stack()
{
	delete[]data;
}
bool Stack::emptyStack()
{
	if (top == -1)
		return true;
	return false;
}
bool Stack::fullStack()
{
	if (top == (this->kichthuoc) - 1)
		return true;
	return false;
}
void Stack::Push(char data)
{
	if (fullStack())
	{
		exit(0);
	}
	else
	{
		top++;
		this->data[top] = data;
	}

}
int Stack::Pop()
{
	int x;
	if (emptyStack())
	{
		x = -1;
		exit(0);
	}
	else
	{
		x = this->data[top--];
	}
	return x;
}
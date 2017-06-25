class Stack
{
	int kichthuoc;
	int top;
	int *data;
public:
	Stack();
	Stack(int);
	~Stack();
	bool emptyStack();
	bool fullStack();
	void Push(int);
	int Pop();
};
Stack::Stack()
{

}
Stack::Stack(int kichthuoc)
{
	top = -1;
	this->kichthuoc = kichthuoc;
	data = new int[this->kichthuoc];
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
void Stack::Push(int data)
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
#pragma once

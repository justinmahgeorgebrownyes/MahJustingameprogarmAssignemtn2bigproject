#include "ItemStack.h"
#include <iostream>
#include <cstdlib>		// Using this temporarily until we learn exception handling next week
using namespace std;

void ItemStack::push(int num)
{
	top = new StackNode(num, top);
}

void ItemStack::pop(int& num)
{
	StackNode* temp;

	if (isEmpty())
	{
		cout << "The stack is empty.\n";
		exit(1);	// Don't do this!!! Use exception handling
	}
	else
	{
		num = top->value;

		temp = top;
		top = top->next;
		delete temp;
	}

	temp = nullptr;
}

bool ItemStack::isEmpty() const
{
	return (!top);
}
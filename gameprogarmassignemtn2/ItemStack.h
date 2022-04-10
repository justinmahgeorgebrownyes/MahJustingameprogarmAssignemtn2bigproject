#pragma once

class ItemStack
{
private:
	class StackNode
	{
		friend class ItemStack;
		int value;
		StackNode* next;

		// Constructor
		StackNode(int value, StackNode* next = nullptr)
		{
			this->value = value;
			this->next = next;
		}
	};

	StackNode* top;
public:
	ItemStack()
	{
		top = nullptr;
	}
	void push(int);
	void pop(int&);
	bool isEmpty() const;
};
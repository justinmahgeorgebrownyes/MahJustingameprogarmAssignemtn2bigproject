#include "ItemQueue.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// Constructor
ItemQueue::ItemQueue()
{
	front = rear = nullptr;
}

// Destructor
ItemQueue::~ItemQueue()
{
	clear();
}

void ItemQueue::enqueue(int num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(num);		// Creates the new node at the end of rear
		rear = rear->next;						// Moves to the new rear node
	}
}

void ItemQueue::dequeue(int& num)
{
	QueueNode* temp;
	if (isEmpty())
	{
		cout << "The queue the empty.\n";
		exit(1);
	}
	else
	{
		num = front->value;		// Printing purposes only!

		temp = front;
		front = front->next;
		delete temp;
	}
	temp = nullptr;
}

bool ItemQueue::isEmpty() const
{
	return (front == nullptr);
}

void ItemQueue::clear()
{
	int value;	// Dummy variable

	while (!isEmpty())
	{
		dequeue(value);
	}
}
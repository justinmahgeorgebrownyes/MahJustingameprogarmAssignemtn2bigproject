#pragma once

class ItemQueue
{
private:
	class QueueNode
	{
		friend class DynIntQueue;
		int value;
		QueueNode* next;

		QueueNode(int value, QueueNode* next = nullptr)
		{
			this->value = value;
			this->next = next;
		}
	};

	// These track the front and rear of the queue
	QueueNode* front;
	QueueNode* rear;
public:
	// Constructor and destructor
	ItemQueue();
	~ItemQueue();

	void enqueue(int);
	void dequeue(int&);
	bool isEmpty() const;
	void clear();
};

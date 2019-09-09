#include<iostream>
#define SIZE 5
using namespace std;

template <class T>

class Queue
{
	T arr[SIZE];
	int rear;
	int front;

	public:
	Queue();
	//~Queue();
	bool Enqueue(T ele);
	T Dequeue()	;
	bool IsEmpty();
       bool IsFull();	


};

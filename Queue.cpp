#include<iostream>
#include"Queue.h"
using namespace std;

template <class T>
Queue<T>::Queue()
{
	rear=0;
	front=0;
}

template <class T>
bool Queue<T>::IsEmpty()
{
	return(front==rear);
}
template <class T>
bool Queue<T>::IsFull()
{
        return(SIZE==rear);
}

template <class T>
bool Queue<T>::Enqueue(T ele)
{
	bool bsuccess=false;
	if(!IsFull())
	{
		arr[rear]=ele;
		rear++;
		bsuccess=true;	
	}
	return bsuccess;
}

template <class T>
T Queue<T>::Dequeue()
{
	T ele;

	if(!IsEmpty())
	{
		ele=arr[front];
		front++;
		return ele;		
	}
	else
	{cout<<"Queue is Empty";}

}



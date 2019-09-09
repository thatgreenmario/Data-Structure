#include<iostream>
using namespace std;
template <class T>
class Node
{
	T data;
	Node *next;

	public:
	T GetData()
	{	
		return data;
	}
	T SetData(T ele)
	{
		data=ele;
	}

	void Setnext(Node *temp)
	{
		next=temp;
	}

	Node* GetNext()
	{
		return next;

	}


};


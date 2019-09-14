#include<iostream>
using namespace std;
template <class T>
class Node
{
	private:
		
			Node* next;
			T data;

	public:

	bool isfull()
	{
		return false;
	}

	Node* getnext()
	{
		return next;
	}	
	
	void setnext(Node *p)
	{
		next=p;
	}

	void setdata(T ele)
	{
		data=ele;
	}

	T getdata()
	{
		return data;
	}
	
};

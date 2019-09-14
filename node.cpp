#include<iostream>
using namespace std;
template <class T>
class Node
{
	private:
		T data;
		Node *next;

	public:
		
		void setnext(Node *p)
		{			
			next=p;
		}	

		Node* getnext()
		{	
			return next;
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


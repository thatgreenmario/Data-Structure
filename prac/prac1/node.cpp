#include<iostream>
using namespace std;
template <class T>
class Node
{
	private:

			T data;
			Node *next;
			Node *prev;

	public:

			void setdata(T ele)
			{
				data=ele;
			}

			T getdata()
			{
				return data;
			}

			void setnext(Node *n)
			{
				next=n;
			}

			Node* getnext()
			{
				return next;
			}

			void setprev(Node *n)
			{
				prev=n;
			}
			
			Node* getprev()
			{
				return prev;
			}
};

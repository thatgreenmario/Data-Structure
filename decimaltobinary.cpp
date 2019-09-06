#include<iostream>
#include<stdexcept>
#define SIZE 100
using namespace std;


class Stack
{
	private:
		int top;
		int arr[SIZE];

	public:
		Stack()
		{
		top(-1)
		};
		bool IsEmpty()
		{
		return (top==-1);
		}
		bool IsFull()
		{
			return (SIZE-1==top);
		}
		int Peep()
		{
			if(IsEmpty())
			{
				throw runtime_error("Stack UnderFlow");
			}
			return arr[top];
		}
		void Push(int x)
		{
			if(IsFull())
			{
				throw runtime_error("Stack Overflow");
			}
			top=top+1;
			arr[top]=x;
		}
		int Pop()
		{
			if(IsEmpty())
			{
				throw runtime_error("Stack Underflow");	
			}
			int Element=arr[top];
			top--;
			return Element;
		}


		/*int Getop()
		{				
			return top;
		}
*/
	
		int Calculate(int x)
		{
			int n,count=0;
			cout<<"Enter number to convert : ";
			cin>>n;
			while(n>0)
			{
			Push(n%x);
			n=n/x;
			count++;
			}
			while(count>0)
			{
			cout<<Pop();
			count--;
			}
		}
			

};



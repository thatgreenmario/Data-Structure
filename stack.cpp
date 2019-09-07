#include<iostream>
#include<stdexcept>
#define SIZE 5
using namespace std;

template <class T>
class Stack
{
	private:
		int top;
		T arr[SIZE];

	public:
		Stack():top(-1){};
		bool IsEmpty()
		{
		return (top==-1);
		}
		bool IsFull()
		{
			return (SIZE-1==top);
		}
		T Peep()
		{
			if(IsEmpty())
			{
				throw runtime_error("Stack UnderFlow");
			}
			return arr[top];
		}
		void Push(T x)
		{
			if(IsFull())
			{
				throw runtime_error("Stack Overflow");
			}
			top=top+1;
			arr[top]=x;
		}
		T Pop()
		{
			if(IsEmpty())
			{
				throw runtime_error("Stack Underflow");	
			}
			T Element=arr[top];
			top--;
			return Element;
		}

};



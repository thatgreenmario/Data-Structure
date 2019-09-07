#include<iostream>
#include<stdexcept>
#include"stack.cpp"

int main()
{
	Stack <int> a;
	try
	{
	a.Push(11);
	a.Push(22);
	a.Push(33);
        a.Push(44);
	a.Push(55);
        a.Push(66);
	}
	catch(runtime_error e)
	{
		cout<<"\n"<<e.what();
	}
	try
	{
		cout<<"\n Popped Element = "<<a.Pop();
		cout<<"\n Popped Element = "<<a.Pop();
		cout<<"\n Popped Element = "<<a.Pop();
		cout<<"\n Popped Element = "<<a.Pop();
		cout<<"\n Popped Element = "<<a.Pop();
		cout<<"\n Popped Element = "<<a.Pop();
	}
	catch(runtime_error e)
	{
		cout<<"\n"<<e.what();
	}

	return 0;
}

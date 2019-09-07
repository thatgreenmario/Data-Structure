#include<iostream>
#include"c2stack.h"
using namespace std;


c2stack::c2stack()
{
	cout<<"Enter the size of Array"<<endl;
	cin>>size;

	arr= new int[size];
	top1=-1;
	top2=size;
}

void c2stack::push1(int x)
{
	if(top1<top2-1)
	{
		top1++;
		arr[top1]=x;
	}
	else
	{
		cout<<"Stack Overflow"<<endl;
		exit(1);
	}
}
void c2stack::push2(int y)
{
        if(top1<top2-1)
        {
                top2--;
                arr[top2]=y;
        }
        else
        {
                cout<<"Stack Overflow"<<endl;
		exit(1);
        }
}
int c2stack::pop1()
{
	if(top1>=0)
	{
		int element=arr[top1];
		top1--;
		return element;
	}
	else
	{
		cout<<"Stack Underflow"<<endl;
		exit(1);
	}
}
int c2stack::pop2()
{
        if(top2<size)
        {
                int element=arr[top2];
                top2++;
                return element;
        }
        else
        {
                cout<<"Stack Underflow"<<endl;
		exit(1);
        }
}


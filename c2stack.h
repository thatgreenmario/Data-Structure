#include<iostream>
using namespace std;

class c2stack
{
	int size;
	int *arr;
	int top1;
	int top2;
	public:
		c2stack();
		void push1(int);
		void push2(int);
		int pop1();
		int pop2();
};


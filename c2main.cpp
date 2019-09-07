#include<iostream>
#include"c2stack.h"

using namespace std;

int main()
{

	c2stack s;
	char c;
	do
	{
	cout<<"***************PUSH AND POP MENU***************"<<endl;
	cout<<"1. Push into Stack 1"<<endl;
	cout<<"2. Push into Stack 2"<<endl;
	cout<<"3. Pop from Stack 1"<<endl;
	cout<<"4. Pop from Stack 2"<<endl;

	int choice;
	cout<<"Enter your choice"<<endl;
	cin>>choice;

	switch(choice)
	{
		case 1:
			{
				int E;
			cout<<"Enter the element you want to Push"<<endl;
			cin>>E;
			s.push1(E);
			break;
			}
		case 2:
			{	
			int e;
			cout<<"Enter the element you want Push"<<endl;
			cin>>e;
			s.push2(e);
			break;
			}
		case 3:
			{
			cout<<"Popped element = "<<s.pop1()<<endl;
			break;
			}
		case 4:
			{
			cout<<"Popped element = "<<s.pop2()<<endl;
			break;
			}
		default:
			cout<<"INVALID CHOICE"<<endl;
			break;


	}
	
	cout<<"Do you wnat to continue.... [y/n]"<<endl;
	cin>>c;
	
	}while ( (c!='n')||(c!='N'));


	return 0;
}

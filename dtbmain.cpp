#include<iostream>
#include"decimaltobinary.cpp"

int main()
{	
	int x;
	Stack s;
	int ch;
	cout<<"______________CONVERSION MENU_______________"<<endl;
	cout<<"1. Convert into Binary"<<endl;
	cout<<"2. COnvert int Octal"<<endl;
		 cin>>ch;

	switch(ch)
	{
		case 1 :
			s.Calculate(2);
			break;
		case 2:
			s.Calculate(8);
			break;
		

		default:
			cout<<"Invalid Choice"<<endl;
	}

	return 0;
}

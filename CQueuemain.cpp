#include"CQueue.cpp"
#include<iostream>
using namespace std;

int main()
{
	Queue<int> o;
	//Queue<float> objQ1;

	char ch;
	int choice;
	
	do
	{
		cout<<"*************QUEUE MENU***************"<<endl;
		cout<<"1. Add a Element"<<endl;
		cout<<"2. Delete a Element"<<endl;
		

		cout<<"Enter your choice"<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1:{
				cout<<"Enter the element"<<endl;
				int e;
				cin>>e;

				bool s=false;
				s=o.Enqueue(e);
				if(s==true)
				{
				cout<<"Element Added Successfully"<<endl;
				}
				else if(s==false)
				{
				cout<<"Queue FULL"<<endl;
				}
				break;
			       }
			case 2:
			       {
			       cout<<"Deleted Element = "<<o.Dequeue();
			       break;
			       }
			default:
			       {
			       	cout<<"Invalid Choice"<<endl;
			       }
				
		}
		cout<<"Do you want to continue...[y/n]"<<endl;
		cin>>ch;
	}while((ch!='n')||(ch!='N'));

return 0;
}


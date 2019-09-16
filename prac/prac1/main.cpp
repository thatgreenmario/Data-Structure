#include"dll.cpp"
#include<iostream>
using namespace std;
int main()
{
	dll<int> a;
	a.addatfirst(11);
	a.addatfirst(22);
	a.addatfirst(33);
	a.addatfirst(44);
	a.addatfirst(55);
	a.display();
	cout<<a.deleteatfirst()<<endl;;
	cout<<a.deleteatlast()<<endl;
	a.display();
	cout<<a.deleteatlast()<<endl;
	a.display();
	a.addatlast(99);
	a.display();
	cout<<a.deleteatlast()<<endl;
	a.display();


	return 0;
}
#include"ll.cpp"
int main()
{
	ll <int>a;
	a.addatfirst(11);
	a.addatfirst(22);
	a.addatfirst(33);
	//a.display();
	//cout<<a.deleteatfirst()<<endl;
	//a.display();

	a.addatlast(55);
	a.display();
	
	//cout<<a.deleteatlast()<<endl;
	
	a.insertat(99,3);

	a.display();

	a.reverse();
	
	a.display();

	return 0;
}


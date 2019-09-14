#include"node.cpp"
template <class T>
class ll
{
	private:

		Node<T>* tail=nullptr;
		Node<T>* head=nullptr;
		T temp;
		int count=0; 
		
	public:

		bool isempty()
		{
			return(head==nullptr && tail==nullptr);
		}

		void addatfirst(T ele)
		{
			Node<T> *temp=new Node<T>;
			temp->setdata(ele);
			temp->setnext(nullptr);

			if(isempty())
			{
				tail=temp;
				head=temp;
				temp->setnext(nullptr);
				count++;
			}
			else
			{
				temp->setnext(head);
				head=temp;
				count++;
			}
		}

		void addatlast(T ele)
		{
			Node<T> *temp=new Node<T>;
			temp->setdata

		void display()
		{
			Node<T> *t=head;
			for(int i=0;i<count;i++)
			{
				cout<<t->getdata()<<"---->";
				t=t->getnext();
			}
			cout<<"NULL"<<endl;
		}
};

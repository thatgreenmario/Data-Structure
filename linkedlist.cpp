#include"Node.h"
#include<iostream>
using namespace std;

template <class T>

class ll
{
	private:
		Node<T> *head;
		Node<T> *tail;

	public:
		ll():head(nullptr),tail(nullptr)
		{}

		bool isFull()
		{
			return false;
		}

		bool isEmpty()
		{
			return (nullptr==head && nullptr==tail);
		}

		bool AddAtEnd(T ele)
		{
			Node<T> *temp=new Node<T>;
			temp->SetData(ele);
			if(isEmpty())
			{
				temp->Setnext(nullptr);
				head=tail=temp;
			}
			else
			{
				temp->Setnext(nullptr);
				tail->Setnext(temp);
				tail=temp;
			}
		}

		void Display()
		{
			Node<T> *t=head;
			while(t!=nullptr)
			{
				cout<<""<<t->GetData()<<"--->";
				t=t->GetNext();
			}
			cout<<"NULL"<<endl;
		}




};

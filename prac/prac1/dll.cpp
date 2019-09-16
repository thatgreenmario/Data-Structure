#include"node.cpp"
using namespace std;
template <class T>
class dll
{
	private:

			Node<T> *tail=nullptr;
			Node<T> *head=nullptr;
			int count=0;
			T ele;

	public:


		bool isempty()
		{
			return(head==nullptr && tail == nullptr);
		}

		void addatfirst(T ele)
		{
			Node<T> *temp=new Node<T>;
			temp->setdata(ele);
			temp->setnext(nullptr);
			temp->setprev(nullptr);

				if(isempty())
				{
					tail=temp;
					head=temp;
					count++;
				}
				else
				{
					temp->setnext(head);
					head->setprev(temp);
					head=temp;
					count++;
					//temp->setprev(tail);

					//head->setprev(temp);
					head=temp;
					count++;
				}

		}

		T deleteatfirst()
		{
			if(isempty())
			{
				cout<<"Nothing to delete";
			}
			else
			{
				Node<T> *t=head;
				ele=head->getdata();
				if(head==tail)
				{
					head=nullptr;
					tail=nullptr;
					delete t;
					count--;
					return ele;
				}
				else
				{
					head=head->getnext();
					head->setprev(nullptr);
					delete t;
					//head->setprev(tail);
					//tail->setnext(head);
					count++;
					return ele;
				}
			}

		}

		void display()
		{
			Node<T> *t=head;
			//for(int i=0;i<count;i++)
			while(t!=nullptr)
			{
				cout<<t->getdata()<<"---->";
				t=t->getnext();
			}
			//cout<<tail->getdata();
			cout<<endl;


		/*	do
			{
				cout<<t->getdata()<<"---->";
				t=t->getnext();
			}while(t!=head);
			*/


		}

		T deleteatlast()
		{
			Node<T> *t=tail;
			T ele=tail->getdata();
			if(isempty())
			{
				cout<<"Nothing to delete";
			}
			else
			{
				if(head==tail)
				{
					head=nullptr;
					tail=nullptr;
					delete t;
					return ele;
					count--;
				}

			/*	//while(t!=tail)
				while(tail != t->getnext()) 
				{
					t=t->getnext();
				}

				//t->setnext(nullptr);
				head->setprev(t);
				delete tail;
				tail=t;
				tail->setnext(head);
				return ele;
				count--;
				*/

			tail=tail->getprev();
			tail->setnext(nullptr);
			delete t;
			count--;
			return ele;


			}
		}

		void addatlast(T ele)
		{
			Node<T> *temp=new Node<T>;
			temp->setdata(ele);
			temp->setnext(nullptr);
			temp->setprev(nullptr);

			if(isempty())
			{
				head=temp;
				tail=temp;
				count++;
			}
			else
			{
				//temp->setprev(tail);
				tail->setnext(temp);
				temp->setprev(tail);
				//temp->setnext(head);
				//head->setprev(temp);
				tail=temp;
				count++;
			}
		}
			
};
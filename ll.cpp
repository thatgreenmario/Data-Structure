#include"node.cpp"

template <class T>
class ll
{
	private:
		
		Node<T> *tail;
		Node<T> *head;
		int count;

	public:
		
		ll()
		{
			tail=head=nullptr;
			count=0;
		}
		
		bool isfull()
		{
			return false;
		}

		bool isempty()
		{
			return(head==nullptr&&tail==nullptr);
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
				
				count++;
			}
			else//(!isempty())
			{
				temp->setnext(head);
				head=temp;
				count++;
			
			}
		}
		
		void display()
		{
			Node<T> *t;
			t=head;
			for(int i=0;i<count;i++)
			{
				cout<<t->getdata()<<"--->";
				t=t->getnext();

			}
			cout<<"NULL"<<endl;
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
				T ele = head->getdata();

				if(head==tail)
				{
					head=tail=nullptr;
					delete t;
					count--;
					return ele;
					
				}
				else
				{
					head=head->getnext();
					delete t;	
					count--;	
					return ele;
					
				}
			}
		} 	
			
			void addatlast(T ele)
			{
				Node<T> *temp=new Node<T>;
				temp->setdata(ele);
				temp->setnext(nullptr);
				if(isempty())
				{
					head=tail=temp;
					count++;
				}
				else
				{
					tail->setnext(temp);
					tail=temp;
					count++;
				}
			}

			T deleteatlast()
			{
				Node<T> *t=head;
				T ele=tail->getdata();
				if(isempty())
				{
					cout<<"Nothing to delete"<<endl;
				}
				else
				{
					if(head==tail)
					{	
						head=tail=nullptr;
						delete t;
						count--;
						return ele;
					}
					else
					{
						while(t->getnext()!=tail)
						{
							t=t->getnext();
						}
						delete tail;
						t->setnext(nullptr);
						tail=t;
						count--;
						return ele;
					}
				}
			}

			void insertat(T ele,int pos)
			{
				Node<T> *temp=new Node<T>;
				temp->setdata(ele);
				temp->setnext(nullptr);


				Node<T> *p=head;
				Node<T> *q=head->getnext();
				int no=0;


				if(isempty())
				{
					head=tail=temp;
					temp->setnext(nullptr);
					count++;
				}
				else
				{
					while(no!= pos-2)
					{
						p=p->getnext();
						q=q->getnext();
						no++;
					}
					p->setnext(temp);
					temp->setnext(q);
					count++;
				}
			}

			void reverse()
			{
				Node<T> *nhead= head;
				Node<T> *t=nullptr;
				head=head->getnext();;
				nhead->setnext(nullptr);
				tail=nhead;
			
				while(head!=nullptr)
				{
					t=head;
					head=head->getnext();
					t->setnext(nhead);
					nhead=t;
				}
				head=nhead;
			}
								
					
							
					
 
};

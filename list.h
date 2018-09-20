#ifndef list_h
#define list_h
#include <iostream>
#include "book.h"
using namespace std;
struct Node
{
	book data;
	Node *next;
};
class List
{
	private:
		Node *head;
	public:
	List(){
		head = 0;
	}
	void Add()
	{
		Node *p = new Node;
		book b;
		cin>>b;
		p->data = b;
		p->next = 0;
		if (head==0)
		{
			head=p;
		}	
		else
		{
			Node *q = head;
			while (q->next!=0)
			{
				q=q->next;
			}
			q->next =p;
		}
	};

	void PrintAll()
	{
			cout<<"STT\tTen book\t\t\t\tTac gia\t\tNam XB\tSo trang\n";
		    int i=1;
		    Node *p = head;	
			while(p!=0)
			{
				cout<<i<<"\t";
				cout<<p->data<<" ";
				p=p->next;
				i+=1;
			}
	}
};
#endif
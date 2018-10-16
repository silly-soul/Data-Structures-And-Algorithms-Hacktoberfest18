#include<iostream>
#include<conio.h>
using namespace std;
class node{
      public:
      int data;
      node *next;};
class linkedlist
{
      private:
               node *head,*tail;
      public:
             linkedlist()
             { head=NULL;
             tail=NULL;
             }
             void createnode(int value)
    {
      node *temp=new node;
      temp->data=value;
      temp->next=NULL;
      if(head==NULL)
      {
        head=temp;
        tail=temp;
        temp=NULL;
      }
      else
      {	
        tail->next=temp;
        tail=temp;
      }
    }
               
               void insert_start(int value)
  {
    node *temp=new node;
    temp->data=value;
    temp->next=head;
    head=temp;
  }
  void insert_position(int pos, int value)
  {
    node *pre=new node;
    node *cur=new node;
    node *temp=new node;
    cur=head;
    for(int i=1;i<pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;	
    temp->next=cur;
  }
  void delete_position(int pos)
  {
    node *current=new node;
    node *previous=new node;
    current=head;
    for(int i=1;i<pos;i++)
    {
      previous=current;
      current=current->next;
    }
    previous->next=current->next;
  }
  void display()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
		}
};
int main()
{
    linkedlist l1;
    int choice;
    while(choice!=6)
    {
    cout<< "enter what you want to do \n"
        <<"\n1.create a node"
        <<"\n2.insert at start"
        <<"\n3.insert at position"
        <<"\n4.delete at position"
        <<"\n5.display"
        <<"\n6.end";
        cin>>choice;
        switch(choice)
        {
                      case 1:
                           int a;
                           cout<<"\nenter value you want to add";
                           cin>>a;
                           l1.createnode(a);
                           break;
                      case 2:
                           int b;
                           cout<<"\nenter value to add at start";
                           cin>>b;
                           l1.insert_start(b);
                           break;
                      case 3:
                           int c,d;
                           cout<<"enter value to add\n";
                           cin>>c;
                           cout<<"enter position\n";
                           cin>>d;
                           l1.insert_position(d,c);
                           break;
                      case 4:
                           int e;
                           cout<<"enter position you want to delete at";
                           cin>>e;
                           l1.delete_position(e);
                           break;
                      case 5:
                           l1.display();
                           break;
                      default:
                              cout<<"wrong choice";
                              break;
                              }
                              }
                              getch();
                              }
    


#include<iostream>
using namespace std;
class node
{
      public:
	int data;
    node *next;
    node(int val)
    {
    	data=val;
    	next=NULL;
	}
};
 void insertAtTail(node* &head, int val) //modify linklist
 {
      	node* n=new node(val);
 	if(head==NULL)
 	{
 		head=n;
 		return;
	 }

 	node* temp=head;
 	while(temp->next!=NULL)
 	{
 		temp=temp->next;
	 }
	 temp->next=n;
 }
 
 void insertAthead(node* &head,int val)
 {
     
 }
int display(node* head)    // not modify linklist
{
	node* temp=head;   //starting from head
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
	     temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	node* head=NULL;
	insertAtTail(head,1);
		insertAtTail(head,23);
			insertAtTail(head,15);
	display(head);
	
}
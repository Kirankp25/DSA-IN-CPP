#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		
};
void push(Node** ref,int newdata)
{
	Node* newnode=new Node();
	
	newnode->data=newdata;
	
	newnode->next=(*ref);
	
	(*ref)=newnode;	
}
void print(Node *node)
{
	while(node != NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
}
int main()
{
	Node* head=NULL;

	push(&head,9);
	print(head);
	return 0;
	
}

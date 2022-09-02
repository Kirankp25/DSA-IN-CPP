#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

int push(Node** head_ref,int new_data)
{
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
void print(Node *node)
{
	while(*node != NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
}
int main()
{
	Node* head=NULL;
	push(&head,6);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

void push(Node** headf ,int newdata)
{
	Node* newnode=new Node();
	newnode->data=newdata;
	newnode->next=(*headf);
	(*headf)=newnode;
	
}
void print(Node *node)
{
	while(node !=NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
}
int main()
{
    Node* head=NULL;
    push(&head,1);
    print(head);
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
// A linked list node
class Node
{
    public:
    int data;
    Node *next;
};

void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main()
{
	Node* head = NULL;
	int n,i,a[n];
	cout<<"input ll size=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{	
	   push(&head,a[i]);
	}
	printList(head);
	return 0;
}

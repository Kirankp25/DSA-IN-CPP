#include<iostream>
using namespace std;

// class Node
// {
// 	public:
// 	int data;
// 	Node *next;
// };
class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=NULL;
		}
};


void push(node* &head,int val){
	node* new_node= new node(val);
	
	new_node->next=head;
	head=new_node;
}

void print(node* head)
{
	
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"NULL";
}
int main()
{
	node* head=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		push(head,temp);
	}
	// push(head,6);
	print(head);
	return 0;
}

#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=NULL;
		}
};
void push(node* &head ,int val){
	node* n=new node(val);
	n->next=head;
	head=n;
}
void push_at(node* pre_node,int key){
    if(pre_node==NULL) return;
    node* n=new node(key);
    n->next=pre_node;
    pre_node=n;

}
void append(node* &head,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void print(node* head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	node* head=NULL;
	
	
	push(head,1);
	push(head,2);
	print(head);
	append(head,3);
    push_at(head->next,4);
	print(head);
	
	return 0;
}

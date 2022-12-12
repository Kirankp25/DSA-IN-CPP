#include<iostream>
using namespace std;

class list
{   

typedef struct node{
    	int data;
		struct node* next;
		
		node(int v){
			data = v;
			next = NULL;
		}
}Node;

	public:
		
	
		
		Node* head = NULL;
		
		void push(int v){
			Node* new_node = new Node(v);
			
			if(head == NULL){
				head = new_node;
				return;
			}else{
				new_node->next = head;
				head = new_node;
			}
			
		}
		
		void print(){
			Node* temp = head;
			
			while(temp != NULL){
				cout << temp->data <<" ";
				temp = temp->next;
			}
			
		}
		
};
//
//void push(Node** head_ref,int new_data)
//{
//	Node* new_node= new Node();
//	new_node->data=new_data;
//	new_node->next=*head_ref;
//	*head_ref=new_node;
//	
//}
//void deletenode(Node** head_ref,int key)
//{
//	Node* temp=*head_ref;
//	Node* prev=NULL;
//	
//	if(temp!=NULL && temp->data==key)
//	{
//	    *head_ref=temp->next;
//	    delete temp;
//	    return;
//	}
//	else
//	{
//	
//	while(temp!=NULL && temp->data!=key )
//	{
//	    prev=temp;
//		temp=temp->next;
//	}
//	if(temp==NULL)
//	{
//		return;
//	}
//	prev->next=temp->next;
//	delete temp;
//	cout<<endl;
//	}
//}
//
//void print(Node* node)
//{
//   while(node!=NULL)	
//   {
//   	cout<<node->data<<" ";
//   	node=node->next;
//   }
//}

int main()
{

	list l;
	l.push(3);
	l.push(5);
	l.push(6);
	
	l.print();
	
	return 0;
}

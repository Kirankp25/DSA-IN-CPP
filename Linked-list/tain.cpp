#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
    node(val)
    {
        data=val;
        next=NULL;
    }

};
void tail(node* head,int val)
{
    node* new_node= new node(val);
    if(head==NULL)
    head=new_node;
    node* temp= *head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main()
{
    node* head=NULL;
    tail(&head,10);
    display(&head);
    
    return 0;
}
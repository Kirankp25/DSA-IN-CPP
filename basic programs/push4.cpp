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
// void push(node** head,int val){
//     node* n=new node();
//     n->data=val;
//     n->next=*head;
//     *head=n;
// }
void push(node* head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
// void append(node** head,int val){
//     node* n=new node();
//     if(*head==NULL)
//     {
//         return;
//     }
//     node* temp=*head;
//     while(temp!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node* head=NULL;
    push(&head,3);
    push(&head,2);
    push(&head,1);
    //append(&head,4);
    print(head);
    return 0;
}
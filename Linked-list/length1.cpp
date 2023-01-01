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
//to push element from front
void push(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
 void length(node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;

    }
    cout<<"Length:"<<cnt<<endl;
}
//to print element present in the ll
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node* head=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    length(head);
    print(head);
    return 0;
}
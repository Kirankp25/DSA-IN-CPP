#include<iostream>
#include<bits/stdc++.h>
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
void tail(node* &head ,int val){
    // if(head==NULL){
    //     head=n;
    //     return;
    // }
    node* n=new node(val);
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;


}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL";
    cout<<endl;
}
int main(){
    node* head=NULL;
    tail(head,1);
    tail(head,2);
    tail(head,3);
    display(head);

    return 0;
}
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
//to find a length of given ll
int length(node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;

    }
    return cnt;
}
void search(node* head,int key){
    // int l=length(head);
    // int c=0
    while(head->data!=key){
        head=head->next;
    }
    if(head->data==key){
        cout<<"Key founded"<<endl;
    }
    if(head->next==NULL){
        cout<<"Key not found"<<endl;
    }
    
}
//to print element present in the ll
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    // length(head);
    print(head);
    search(head,2);
    return 0;
}
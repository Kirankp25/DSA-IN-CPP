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
void search(node* head,int key){
    // int l=length(head);
    // int c=0
    while(head!=NULL){
        if(head->data==key){
            cout<<"key founded"<<endl;
            return;
        }
        head=head->next;
    }
    cout<<"key not found"<<endl;
    // if(head->data==key){
    //     cout<<"Key founded"<<endl;
    // }
    // if(head->next==NULL){
    //     cout<<"Key not found"<<endl;
    // }
    
}
//to print element present in the ll
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void reverse(node* head){
    node* current=head;
    node* next=NULL;
    node* pre=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=pre;
        pre=current;
        current=next;
    }
    head=pre;

}
int main(){
    node* head=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    length(head);
    search(head,3);
    print(head);
    reverse(head);
    print(head);
    return 0;
}
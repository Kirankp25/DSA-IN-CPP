// data types
// 1 int
// 2 char
// 3 string
// 4 double
// 5 long
// 6 short
// 7 boolean

// keyword
// identifier
// variable
// constants
// functions
// 1.in-built
// 2.user define

// array
// sorting
// searching
// delete
// position
// addition
// 1d
// 2d

// string

// linked list
// add front
// add back
// add middle
// searching 
// delete
#include<iostream>
using namespace std;
class node{

    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;

    }

};

void add(node* &head,int val){
    node* n=new node(val);
    while(head->next!=NULL)
    head=head->next;
    head=n;
}
void print(node* &head){
    while(head->next!=NULL)
    cout<<head->data<< " ";
}
int main(){
    node* head=NULL;
    add(head,1);
    add(head,2);
    add(head,3);
    print(head);
    return 0;

}
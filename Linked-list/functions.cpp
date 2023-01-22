#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        //constructor public access modifier
        node(int val){
            data=val;
            next=NULL;
        }
};

//to add elements in front of the list
void add_front(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
    
}


//to add elements in end of list
void add_tail(node* &head,int val){
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
//to find length of given linked list
int len(node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
//to search given element
void search(node* head,int key){
    int cnt=0;
    while(head!=NULL){
        if(head->data==key){
            cout<<"element found at index"<<cnt<<endl;
            return;
        }
        cnt++;
        head=head->next;
    }
    cout<<"not found"<<endl;
}

//to print all elements
void print(node* head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}


int main(){
    node* head=NULL;
    add_front(head,1);
    add_front(head,2);
    add_front(head,3);
    add_tail(head,4);
    add_front(head,5);
    print(head);
    //cout<<len(head);
    search(head,4);
    return 0;
}
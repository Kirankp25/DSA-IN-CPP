#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    for(auto x:arr){
        cout<<&x<<" ";
        cin>>x;
        cout<<x;
    }
    return 0;
}
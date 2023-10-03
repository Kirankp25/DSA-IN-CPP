#include<iostream>
using namespace std;
int solve(int n){
    if(n==0 ||n==1) return n;
    return n*solve(n-1);
}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<solve(n);
    return 0;
}
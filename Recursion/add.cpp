#include<iostream>
using namespace std;
int solve(int n){
    if(n==0) return 0;
    int k=n+solve(n-1);
    return k;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);

    return 0;
}
#include<iostream>
using namespace std;
int solve(int n,int a,int b){
    if(n<=0){
        return 0;
    }
    cout<<a<<" ";
    solve(n-1,a+b,b);
}
    
    

int main(){
    int n;
    cin>>n;
    solve(n,0,1);
    return 0;
   
}
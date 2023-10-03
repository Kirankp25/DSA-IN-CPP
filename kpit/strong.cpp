// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0||n==1) return n;
    else{
        return n*fact(n-1);
    }
}
void strong(int kp){
    int n=kp;
    int s=0;
    while(n){
        int k=n%10;
        s+=fact(k);
        n/=10;
    }
    if(kp==s) cout<<"strong"<<endl;
    else cout<<"invalid"<<endl;
}


int main() {
   int n;
   cin>>n;
    strong(n);
  

    return 0;
}
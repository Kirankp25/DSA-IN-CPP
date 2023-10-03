// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int k){
    
    for(int i=2;i<=sqrt(k);i++){
        if(k%i==0) return false;
    }
    return true;
}
void printPrime(int s,int e){
    int c=0;
    for(int i=s;i<=e;i++){
        if(prime(i)){
            cout<<i<<" ";
            c++;
        }
    }
    cout<<endl<<c;
}

int main() {
    int s;
    cin>>s;
    int e;
    cin>>e;
    printPrime(s,e);
  

    return 0;
}
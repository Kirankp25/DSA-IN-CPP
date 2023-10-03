#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(string &s,int l,int r){
    if(l>=r/2){
        return;
    }
    else{
        swap(s[l],s[r-l-1]);
    }
    solve(s,l+1,r);
}


int main(){
    string s="kiran";
    cout<<s<<endl;
    solve(s,0,5);
    cout<<s;
    return 0;
}

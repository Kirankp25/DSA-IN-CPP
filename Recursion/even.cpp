#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void rev(string s,int st,int e){
    if(st>e){
            cout<<s;
            return;

    }

    // int temp=s[st];
    // s[st]=s[e];
    // s[e]=temp;
    swap(s[st],s[e]);
    rev(s,st+1,e-1);
}
int main(){
    string s;
    getline(cin,s);
    int st=0;
    int e=s.length()-1;
    rev(s,st,e);
    

    return 0;
}
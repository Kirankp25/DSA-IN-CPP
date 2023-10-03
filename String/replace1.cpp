#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int replace(int s){
    string st=to_string(s);
    for(int i=0;i<st.length();i++){
        if(st[i]=='0'){
            st[i]='1';
        }
    }
    return stoi(st);
}

int main() {
    int s;
    cin>>s;
    cout<<replace(s);
  

    return 0;
}
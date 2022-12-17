#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> v;

    string s="kiran";
    string sp="";
    for(int i=0;i<s.length();i++)
    sp+=s[i];
    v.push_back(sp);
    for(auto x:v)
    cout<<x;

    return 0;
}
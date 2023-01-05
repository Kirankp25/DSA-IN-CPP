#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v){
    unordered_map<int ,int> m;
    for(auto x:v)
    m[x]++;
    for(auto x:m){
        cout<<x.first<<":"<<x.second<<endl;
    }

}
int main(){
    vector<int>v={2,3,4,2,2,3,4,4,4,5,5,5,5};
    print(v);
    return 0;
}
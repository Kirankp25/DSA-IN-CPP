#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[]={1,2,3,9,5,6,65,8,9};
    // cout<<(char)arr[6];
    vector<int>v{1,2,3,4,5,6,7,8,9,0};
    v.erase(v.begin()+1);
    v.clear();
    for(auto x:v)
    cout<<x;
    
    return 0;
}
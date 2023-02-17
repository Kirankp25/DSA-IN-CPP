#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{1,2,3,4,5,6,7,8,9};
    vector<int>k;
    k=v;
    for(auto x:k)
    cout<<x;
    return 0;
}
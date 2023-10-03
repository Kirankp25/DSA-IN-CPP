#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{1,2,3,4,5,6,7,8,9};
    int k=3;
    int i=0;
    while(k){
        reverse(v.begin()+i,v.begin()+k+i);
        i=i+k;
    }
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
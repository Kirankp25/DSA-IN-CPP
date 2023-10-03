#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int l,int r){
    if(l>=r/2){
        return;
    }
    else{
        swap(arr[l],arr[r-l-1]);
    }
    solve(arr,l+1,r);
}

int main(){
    int arr[]={1,2,3,4,5};
    for(auto x:arr){
        cout<<x<<" ";
    }
    solve(arr,0,5);
    cout<<endl;

    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}
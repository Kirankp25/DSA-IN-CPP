#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(auto x:arr)
    cout<<&x<<" ";
    // cout<<&x<<" ";
    // cout<<endl;
    // cout<<arr+n<<endl;
    // cout<<arr;
    // cout<<"\n"<<n<<endl;
    // cout<<&arr[0]<<" "<<arr<<endl;
    // cout<<&arr[8]<<" "<<arr+n;
    return 0;
}   

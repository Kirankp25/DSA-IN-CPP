#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,6,1,8,3,8,5,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(auto x:arr)
    cout<<x<<" ";
    cout<<sizeof(arr);
    
    return 0;
}
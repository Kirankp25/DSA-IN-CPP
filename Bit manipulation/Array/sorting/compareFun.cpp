//inbuilt fuctions in cpp for sorting
#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    return a > b;
}
int main()
{
    int arr[]={23,4,5,2,6,1,78,5,56,33,98,143};
    int n=sizeof(arr)/sizeof(int);
    cout<<"bsfore sorting"<<endl;
    for(auto x:arr)
    {cout<<x<<" ";}
    cout<<endl;
    sort(arr,arr+n,compare);
    cout<<"after sorting"<<endl;
    for(auto x:arr)
    {cout<<x<<" ";}
    cout<<endl;
    reverse(arr,arr+n);
    cout<<"after reversing"<<endl;
    for(auto x:arr)
    {cout<<x<<" ";}
    return 0;
    return 0;
}
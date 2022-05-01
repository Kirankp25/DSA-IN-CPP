#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{
    cout<<"after reversing the array"<<endl;
    for(int i=n;i>0;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    reverse(arr,10);
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}
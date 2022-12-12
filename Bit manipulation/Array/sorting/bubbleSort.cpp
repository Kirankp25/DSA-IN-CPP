//sorting using bubble sorting
#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    for(int i=1;i<=n-i;i++)
    {
        for(int j=1;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                {
                   swap(arr[j],arr[j+1]);
                }
        }

    }
}
int main()
{
    int arr[]={1,7,3,5,2,9,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Un-sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(arr,n);
    cout<<endl;
    cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
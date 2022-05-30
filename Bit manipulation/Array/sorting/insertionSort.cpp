//insertion sorting
#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int prev=i-1;
        while(prev>=0 and arr[prev]>current)
        {
            arr[prev+1]=arr[prev];
            prev-=1;
        }
        arr[prev+1]=current;
    }
}

int main()
{
    int arr[]={23,4,5,2,6,1,78,5,56,33,98,143};
    int n=sizeof(arr)/sizeof(int);
    cout<<"bsfore sorting"<<endl;
    for(auto x:arr)
    {cout<<x<<" ";}
    cout<<endl;
    insertion_sort(arr,n);
    cout<<"after sorting"<<endl;
    for(auto x:arr)
    {cout<<x<<" ";}
    return 0;
}
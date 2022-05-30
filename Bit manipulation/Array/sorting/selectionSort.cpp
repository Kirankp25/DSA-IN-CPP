//selection Sort 
#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
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
    selection_sort(arr,n);
    cout<<"after sorting"<<endl;
    for(auto x:arr)
    {cout<<x<<" ";}
    return 0;
}
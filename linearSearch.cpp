//WAP in cpp to search an element from given array

#include<iostream>
using namespace std;
int linearSearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        return i;
    }
    return -1;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};

    int k=sizeof(a)/sizeof(int);
    cout<<"enter element to find position of it="<<endl;
    int c;
    cin>>c;
    int index=linearSearch(a,k,c);
    if(index!=-1)
    cout<<"element at "<<index+1<<"position"<<endl;
    else
    cout<<"element is not found"<<endl;
    return 0;
}
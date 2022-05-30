#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
    if(e==0 || e==1)
    return;
    int fs=0;
    int fe=e/2;
    
    if()
    

}
int main()
{
    int arr[]={4,3,6,2,8,4,9,6,3,0};
    int s=0;
    int e=sizeof(arr)/sizeof(int);
    //cout<<e<<endl;
    cout<<merge(arr,s,e);
    for(int i=0;i<e;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
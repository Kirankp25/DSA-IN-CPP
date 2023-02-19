#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int s=0;
    int l=8;
    int b=0,e=0;
    while(s<l){
        if(arr[s]+arr[s+1]>0)
        b=s;
        if(arr[l]+arr[l-1]>0)
        e=l;
        else{
            s++;
            l--;
        }
    }int sum=0;
    for(int i=b;i<=e;i++)
    sum+=arr[i];
    cout<<sum;
    return 0;
}
#include<iostream>
using namespace std;

void print(int arr[],int s,int n){
    
    if(s<=n-1) {
        int t=arr[s];
        arr[s]=arr[n-1];
        arr[n-1]=t;
        print(arr,s+1,n-1);
    }
   
   
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    print(arr,0,n);
    cout<<endl;
    for(int i:arr)cout<<i<<" ";

    return 0;
}
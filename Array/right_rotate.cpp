#include<iostream>
using namespace std;
class solution{
    public:
        void left_shift(int arr[],int d,int n){
            int arr1[n];
            for(int i=0;i<n;i++)
                arr1[i]=arr[i];
            for(int i=0;i<n;i++)
                arr1[i+d]=arr[i];
            for(int i=0;i<n;i++)
                cout<<arr1[i]<<" ";
        }
        

};
int main(){
    solution s;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    s.left_shift(arr,5,n);
    return 0;
}
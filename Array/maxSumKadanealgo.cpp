#include<iostream>
using namespace std;
int maxSum(int arr[],int n)
{
    int lsum=0;
    int csum=0;
    for(int k=0;k<n;k++)
            {
                csum+=arr[k];
                    if(csum<0)
                    {
                        csum=0;
                    }
                    lsum=max(lsum,csum);
           }
    return lsum;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int n=sizeof(arr)/sizeof(int);
    cout<<"largest sum is "<<maxSum(arr,n);

    return 0;
}
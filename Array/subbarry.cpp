#include<iostream>
using namespace std;
void PrintSubArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int s=0;
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
                s+=arr[k];
            }
            if(s==3)
            cout<<endl;
            
            
        }
        
    }
    
    

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    PrintSubArray(arr,n);
    
    return 0;
}
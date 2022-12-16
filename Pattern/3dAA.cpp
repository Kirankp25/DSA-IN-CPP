#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter :";
    cin>>n;
    //int a[n][n][n];
    
    for(int i=0;i<=n;i++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        for(int j=0;j<=n;j++)
        {
            if(i==j or i+j==n) 
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
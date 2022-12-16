#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter :";
    cin>>n;
    
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            cout<<"x";
        }
        cout<<" ";
        for(int i=0;i<n;i++)
        {
            cout<<"x";
        }
        
        cout<<endl;
    }
    return 0;
}
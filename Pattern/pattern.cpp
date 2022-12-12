#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 or i==j)
            cout<<j;
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(int k=1;k<n;k++)
    cout<<k;
    return 0;
}
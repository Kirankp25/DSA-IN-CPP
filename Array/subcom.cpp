#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,3,4,5,6,7};
for(int i=0;i<7;i++)
{
    for(int j=i;j<7;j++)
    {
        for(int k=i;k<=j;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}
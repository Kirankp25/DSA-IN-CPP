#include <iostream>
using namespace std;

int main() {
    int i,j,n,a[n][2],sum[n];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
           cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
        	cout<<a[i][j]<<" ";
		}cout<<endl;
    }
	// your code goes here
	return 0;
}

		 


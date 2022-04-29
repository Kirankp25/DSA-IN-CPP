#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,i,j,a[n][2],b[n],sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
	    for(j=0;j<k;j++)
	    cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{   sum=1;
	    for(j=0;j<k;j++)
	    {
	        if(a[i][j]==a[i][j+1])
	           continue;
	        else
	        sum++;
	    }cout<<sum<<endl;
	}
	
	return 0;
}

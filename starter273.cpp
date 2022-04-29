#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,i,j,a[n][3],sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<3;j++)
	    cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{
	    if(a[i][0]<a[i][1] && a[i][0]<a[i][2])
	    {
	    	sum=a[i][1]+a[i][2];
	    	cout<<sum<<endl;
		}
		else if(a[i][1]<a[i][1] && a[i][1]<a[i][2])
		{
			sum=a[i][0]+a[i][2];
			cout<<sum<<endl;
		}
		else
		{
			sum=a[i][0]+a[i][1];
			cout<<sum<<endl;
		}
	}
	
	return 0;
}

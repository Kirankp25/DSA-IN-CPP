#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int n,i,j,a[n][2],b[n],sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<2;j++)
	    cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{    int sum=0;
	    for(j=0;j<2;j++)
	    {
	        sum+=a[i][j];
	    }b[i]=sum;
	 }
	 for(i=0;i<n;i++)
	 {    
	    if((21-b[i])<=10)
		{
	    	cout<<21-b[i]<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	    
	 }
	
	return 0;
}

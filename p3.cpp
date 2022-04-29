#include<iostream>

using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(k=n-i;k>0;k--)
		   cout<<" ";
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}cout<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	int p[n],k[n];
	for(i=0;i<n;i++)
	{
		cin>>p[i];
		k[i]=0;
	}
	int t;
	cin>>t;
	int s=0;
	while(s<=t)
	{
		for(i=0;i<n;i++)
		{
			s+=p[i];
			k[i]=+1;
		}if(s==t)
		{//break;
		}
	}
	for(i=0;i<n;i++)
	{cout<<" "<<k[i];
	}
	return 0;
}

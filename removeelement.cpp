#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n,i,v;
	int a[n],temp[n];
	cin>>n>>v;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=v)
		{temp[i]=a[i];
		}
		else{
			continue;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<temp[i]<<",";
	}
	
	return 0;
}

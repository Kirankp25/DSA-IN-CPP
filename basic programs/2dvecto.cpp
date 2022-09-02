#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<vector<int>> v;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>v[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		   cout<<v[i][j]<<" ";
		}cout<<endl;
	}int n=4/10;
	cout<<n;
	
	return 0;
}


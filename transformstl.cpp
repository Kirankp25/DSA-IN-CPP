#include<bits/stdc++.h>
using namespace std;
int increament(int x){return (x+1);}
int main()
{
	int a[]={0,1,2,3,4,5,6,7,8,9};
	int n=sizeof(a)/sizeof(a[0]);
	transform(a,a+n,a,increament);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}

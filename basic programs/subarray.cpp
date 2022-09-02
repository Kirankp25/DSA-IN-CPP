#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n,i,j,k,sum;
	int a[n];
	cout <<"enter size of a array=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxSum=INT_MIN;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			sum=0;
			for(k=i;k<=j;k++)
			{
				sum+=a[k];
				cout<<a[k]<<" ";
			}cout<<endl;
		}maxSum=max(maxSum,sum);
		
	}cout<<"maxSum="<<maxSum;
	return 0;
}

#include<iostream>
using namespace std;

void ReverseArray(int a[],int start,int end)
{
	while(start<end)
	{
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
}

void PrintArray(int a[],int end)
{
	for(int i=0;i<end;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{

	int a[]={1,2,3,4,5,6,7,8,9,10,26 56};
	int n=sizeof(a)/sizeof(a[0]);
	
	PrintArray(a,n);             //to print original array
	ReverseArray(a,0,n-1);          //to reverse array
	PrintArray(a,n);                 //to print reverse array
	return 0;
}

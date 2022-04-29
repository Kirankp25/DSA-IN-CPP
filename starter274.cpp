#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,a[n],count=0,temp=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    
	  temp=a[i]/10;
	  count=a[i]%10;
	  if(count>0)
	  cout<<temp+1<<endl;
	  else
	  cout<<temp<<endl;
	}
	return 0;
}

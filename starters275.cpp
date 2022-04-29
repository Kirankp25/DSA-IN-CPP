#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,j,a[n][2],b,c=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<2;j++)
	    {
	        cin>>a[i][j];
	    }
	
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<2;j++)
	    {
	        if(a[i][j+1] % a[i][j]==0)
	        {
	          cout<<a[i][j+1]/ a[i][j]<<endl;  
	        }
	        else 
	        {
	            while(b % a[i][j]!=0)
	            {
	                b=a[i][j+1]*c;
	                c++;
	                
	            }
	            cout<<c<<endl;
	            
	        }
	       
	    }
	
	}
	return 0;
}

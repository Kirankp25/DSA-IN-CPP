#include <iostream>
using namespace std;

int main() {
    int i,j,n,a[n][2],sum;
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
            
             if(j==0)sum+=((a[i][0])*10);
             if(j==1)sum+=((a[i][1])*5);
             
         }cout<<sum<<endl;sum=0;
    }
	// your code goes here
	return 0;
}


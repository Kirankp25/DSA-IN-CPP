#include<bits/stdc++.h>
using namespace std;
int isPrime(int h);

int main()
{
	int i,j,z,x,y,p=0,k=0;
	cin>>z>>x>>y;
	while(x++<y)
	{
		i=x;
		for(j=x+1;j<y;j++)
		{
		int m=isPrime(i);
		int n=isPrime(j);
		int a=(i*j)/((j-i)*(j-i));
		if(m && n==1 ||m==1 ||n==1)
		{continue;
		}
		else{
		
		if(a>=z)
		{
	    	z=a;
	    	p=i;
	    	k=j;
		}
	    }
	    }
	}
	cout<<p<<" "<<k;
	return 0;
}
int isPrime(int h){
	int s=1;
	int d=0;
    if (d <= 1)
        return d;
    for (int i = 2; i < d;i++)
        if (d % i == 0)
            return d;
            
            
   return s;
}


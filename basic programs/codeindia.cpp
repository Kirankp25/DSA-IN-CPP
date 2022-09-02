#include<bits/stdc++.h>
using namespace std;
int sum(int k)
{
    if(k==0)
    return 0;
    int s=0;
    for(int i=1;i<=k;i++)
    {
      s+=i;  
    }
    return s;
}

int gcd(int a,int b)
{
	if(a==0)
    	return b;
    return gcd(b%a,a);
	
}

int main() 
{
    int n,a[n],c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            int a=sum(i);
            int b=(j*j*j*j);
            if(gcd(a,b)>1 && b%a==0)
            c++;
        }cout<<c<<endl;
    }
	//code
	return 0;
}

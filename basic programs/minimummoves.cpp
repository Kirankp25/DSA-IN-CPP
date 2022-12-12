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
        }
		cout<<c<<endl;
	}
	//code
	return 0;
}

#include <iostream.h>
using namespace std;

int minJumps(int arr[], int n)

{
if (n == 1)
return 0;

int res = INT_MAX;
for (int i = n - 2; i >= 0; i--) {
if (i + arr[i] >= n - 1) {
    int sub_res = minJumps(arr, i + 1);

if (sub_res != INT_MAX)

res = min(res, sub_res + 1)
}

}return res;

}



// Driver Code

int main()

{

int arr[] = { 1, 3, 6, 3, 2,3, 6, 8, 9, 5 };

int n = sizeof(arr) / sizeof(arr[0]);

cout << "Minimum number of jumps to";

cout << " reach the end is " << minJumps(arr, n);

return 0;

}

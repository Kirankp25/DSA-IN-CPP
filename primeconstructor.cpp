#include<bits/stdc++.h>
using namespace std;

int lcm(int x, int y) 
{
   int a;
   a = (x > y) ? x: y;
   while (true) 
   {
      if (a % x == 0 && a % y == 0)
         return a;
         ++a;
   }
}
bool isPrime(int d){
    if (d <= 1)
        return false;
    for (int i = 2; i < d;i++)
        if (d % i == 0)
            return false;
            
            
   return true;
}
int main()
{
  int i,n,k=1,p[n];
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>p[i];
  }
  sort(p, p + n);
  int r=p[i];
  for(i=0;i<n;i++)
  {
   k=lcm(k,p[i]);
   if(p[i]<=r)
   r=p[i];
  }
  int j=k+r;
  isPrime(j)?cout<<j:cout<<"None";
  return 0;
}

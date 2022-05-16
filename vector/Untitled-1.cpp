#include<iostream>
//#include<algorithm>
//#include<vector>
 int hammingWeight(int n) 
 {
        int  cnt = 0;
        while(n!=0){
            cnt+= n&1;
            n = n>>1;
        }
        return cnt;
 }
int main()
{
    int  n;
    cin>>n;
    cout<<hammingWeight(n);
    return 0;
}
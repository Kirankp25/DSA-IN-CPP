#include<iostream>
#include<algorithm>
#include<vector>
int setCount(int n)
{
    int cnt=0;
    while(n)
    {
            cnt+= n&1;
            n = n>>1;
    }
    return cnt;

}

int main()
{
    int  n;
    std::cin>>n;
   
    std::cout<<setCount(n);
    return 0;
}
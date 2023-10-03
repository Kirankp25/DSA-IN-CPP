#include<iostream>
using namespace std;
int fabbo(int n)
{
    if(n<=1)
        return n;
    return fabbo(n-1)+fabbo(n-2);
}
int main()
{
    int n=5;
    std::cout<<fabbo(n)<<" ";
    return 0;
}
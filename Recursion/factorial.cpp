#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1 or n==0)
    {
        return n;
    }
    else
    return n*factorial(n-1);
}
int main()
{
    int n=5;
    cout<<factorial(n);
    return 0;
}
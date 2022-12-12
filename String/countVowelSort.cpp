#include<iostream>
using namespace std;
int countSortVowel(int n)
{
    int a=1,e=1,i=1,o=1,u=1;
    while(--n)
    {
    o+=u;
    i+=o;
    e+=i;
    a+=e;
    }
    return a+e+i+o+u;
}
int main()
{
    int n;
    cin>>n;
    cout<<countSortVowel(n)<<endl;
}
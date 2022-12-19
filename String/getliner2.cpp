#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="kiran";
    //cin>>s;
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}
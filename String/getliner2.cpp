#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="k";
    //cin>>s;
    reverse(s.begin(),s.end());
    toupper(s);
    cout<<s;
    return 0;
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string ss;

    int n=5;
    vector<string> sr;
    string s;
    
    while(n--)
    {
        getline(cin,s);
        sr.push_back(s);
    }
    for(string x:sr)
    {
        cout<<x<<" ";
    }
    cout<<sizeof(sr)<<endl;
        
   
}
//compress a string into small string by compressing the duplicate element of a string
 
#include<iostream>
#include<string>
using namespace std;
string compressString(string str)
{
    int n=str.length()-1;
    string output;
    for(int i=0;i<n;i++)
    {
        int count=1;
        while(i<n and str[i+1]==str[i])
        {
            count++;
            i++;
        }
        output+=str[i];
        output+=to_string(count);

    }
    if(str.length()>output.length())
    return output;
    else
    return str;
}
int main()
{
    string s1="kiiiirrran";
    string s2="paaaaaaattttil";
    cout<<compressString(s1)<<endl;
    cout<<compressString(s2)<<endl;

}
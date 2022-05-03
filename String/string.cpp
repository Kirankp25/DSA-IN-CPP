//implementaion of character array or string 
//use of function and special character which is null "\0"
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[]={'a','b','d','e','f','\0'};
    cout<<a<<endl;
    cout<<strlen(a)<<endl;
    cout<<sizeof(a)<<endl;
    return 0;
}
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
 
//to print all sub strings
void subString(char str[], int n)
{
    //char str[];
    // starting point
    for (int len = 1; len <= n; len++)
    {   
        // ending point
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                cout<<str[k];
            // cout <<strlen(str)<< endl;
            cout<<endl;
        }
    }
}

int main()
{
    char str[] = "abc";
    subString(str, strlen(str));
    return 0;
}

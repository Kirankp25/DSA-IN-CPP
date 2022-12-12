#include<bits/stdc++.h>
using namespace std;
 
//to print all sub strings
void subString(char str[], int n)
{
    
    // starting point
    for (int len = 1; len <= n; len++)
    {   
        // ending point
        for (int i = 0; i <= n - len; i++)
        {
            
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                 str[k];
             
            cout << endl;
        }
    }
}
 

int main()
{
    char str[] = "abc";
    subString(str, strlen(str));
    return 0;
}

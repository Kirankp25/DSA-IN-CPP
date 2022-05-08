#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100]="kiran";
    char b[100]="patil";

    cout<<strlen(a)<<endl;
    //strcpy(b,a);
    cout<<b<<endl;
    cout<<a<<endl;
    cout<<strcmp(a,b)<<endl;
    char web[]="www.";
    char domain[]="codingminutes.com";

    cout<<strcat(web,domain)<<endl;
   
   


    return 0;
}
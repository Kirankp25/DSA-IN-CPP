#include<iostream>
using namespace std;
int main()
{
    char temp;
    int len=0-1;
    while(temp!='\n')
    {
        len++;
        cout<<temp;
        temp=cin.get();

    }
    cout<<endl;
    cout<<"length="<<len<<endl;
    return 0;
}
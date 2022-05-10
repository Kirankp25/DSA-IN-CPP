#include<iostream>
using namespace std;
int main()
{
    int x=6;
    float f=8.9;
    cout<<&x<<endl;
    cout<<&f<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<&i<<endl;
    }

    return 0;
}
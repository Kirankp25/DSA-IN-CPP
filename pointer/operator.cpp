#include<iostream>
using namespace std;
int main()
{
    //"&"operator
    int x=10;
    cout<<&x<<endl;
    // 
    float y=5.5;
    cout<<&y<<endl;

    //pointer
    //Dereferance operator to access variable value by its address
    int *xptr=&x;
    cout<<*xptr<<endl;;
    cout<<xptr;
    

   
    return 0;
}
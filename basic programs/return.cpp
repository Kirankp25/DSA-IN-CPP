#include<iostream>
using namespace std;
void operation(int a,int b)
{
    if(a==b){
        return;     //return the flow of execution
    }
    else{
        cout<<a+b<<endl;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    operation(a,b);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=n&(n-1);
    cout<<k;
    return 0;
}

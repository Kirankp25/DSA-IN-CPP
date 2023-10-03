#include<iostream>
using namespace std;
int srt(int k){
    return k*k;
}
int sum(int n)
{
    int s=0;
    int c=0;
    for(int i=1;s<n;i++){
        s+=srt(i);
        c++;

    }if(s==n)return c;
    else return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    
    
    
    return 0;
}

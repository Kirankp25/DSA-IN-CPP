#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    for(int k=1;k<=i+1;k++){
        cout<<k;
    }
    for(int j=0;j<2*(n-1-i);j++){
        cout<<" ";
    }
    for(int k=n-(n-i-1);k>0;k--){
        cout<<k;
    }
    cout<<endl;

   }
   return 0;
}
  
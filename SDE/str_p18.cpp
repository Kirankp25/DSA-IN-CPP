#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int num=65+n-1;
   for(int i=0;i<n;i++)
   {
    char ch=char(num-i);
    for(int j=0;j<=i;j++){
        cout<<ch++;
    }
    
    cout<<endl;

   }
    return 0;
}


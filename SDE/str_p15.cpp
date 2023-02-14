#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int num=65;
   for(int i=0;i<n;i++)
   {
    char ch=char(num);
    for(int j=0;j<n-i;j++){
        cout<<ch++;
    }
    
    cout<<endl;

   }
    return 0;
}


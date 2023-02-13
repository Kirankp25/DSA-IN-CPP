#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   
   for(int i=0;i<n;i++)
   {
    for(int k=0;k<n-1-i;k++){
        cout<<" ";
    }
    char ch='A';
    for(int j=0;j<2*i+1;j++){
        cout<<ch++;
    }
    cout<<endl;

   }
    return 0;
}
//     A
//    ABA
//   ABCBA 
//  ABCDCBA

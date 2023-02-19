#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    for(int k=0;k<i;k++){
        if(k==0)cout<<"*"<<" ";
    }
    for(int j=0;j<n-2-i;j++){
        cout<<" "<<"";
    }
    cout<<"*";
    for(int j=0;j<n-2-i;j++){
        cout<<" "<<"";
    }
    cout<<"*";
    cout<<endl;

   }
    return 0;
}
// * * * * * * * * *
//   * * * * * * *
//     * * * * *       
//       * * *
//        * 
//  1      1  1 1 1  1 1 1 1  1 1 1 1  1     1
//  1    1      1    1     1  1     1  11    1
//  1  1        1    1     1  1     1  1 1   1
//  1 1         1    1 1 1 1  1 1 1 1  1  1  1
//  1  1        1    1 1      1     1  1   1 1
//  1    1      1    1   1    1     1  1    11
//  1      1  1 1 1  1     1  1     1  1     1

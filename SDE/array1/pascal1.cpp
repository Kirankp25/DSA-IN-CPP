#include<iostream>
#include<vector>
using namespace std;

void pascal(int n){
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        v[i].resize(i+1);
        v[i][0]=v[i][i]=1;

        for(int j=1;j<i;j++)
        {
            v[i][j]=v[i-1][j-1]+v[i-1][j];


        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pascal(n);
    return 0;
}
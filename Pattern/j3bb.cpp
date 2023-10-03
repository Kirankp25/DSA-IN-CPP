#include <iostream>
#include <cmath>
#include<vector>
using namespace std;

int main() {
    int n = 3;
    int k=n;
    vector<vector<int>>v={{
00 ,01, 02, 03, 04},{
10, 11, 12, 13, 14},{
20, 21, 22, 23, 24},{
30, 31, 32, 33, 34},{
40, 41, 42, 43, 44}};
    for(int i=1;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            // cout<<i<<j<<" ";
            cout<<v[i-1][j];
            cout<<v[j][i-1];
            cout<<v[2*n-i-1][j];
            cout<<v[j][2*n-i-1];


        }cout<<endl;
    }
    for(int i=0;i<2*n-1;i++)
            for(int j=0;j<2*n-1;j++){
                cout<<v[i][j]<<" ";
            }cout<<endl;



    return 0;
}

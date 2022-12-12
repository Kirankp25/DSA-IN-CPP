#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>v;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>v[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr(10,1);
    for(int x=0;x<arr.size();x++)
    {
        cout<<arr[x]<<",";
    }
    
    return 0;
}
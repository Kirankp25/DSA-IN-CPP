#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int arr[] = {4,2,1};

    sort(arr, arr+3);
    
    for(auto x:arr)
    cout<<x<<" ";
    
    return 0;
}
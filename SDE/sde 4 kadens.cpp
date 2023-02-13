#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>&arr){
    int s=0;
    int l=arr.size()-1;
    while(s<l){
        if(arr[s]>arr[s+1])
        break;
        
    }

}
int main() {
  vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
  vector < int > subarray;
  int lon = maxSubArray(arr);
  cout << "The longest subarray with maximum sum is " << lon << endl;
  
  return 0;
}
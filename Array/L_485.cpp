#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int m=0;
        int t=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                t++;
            }
            else{
                if(t>m){
                    m=t;
                    t=0;
                }
                else{
                    t=0;
                }
            }
        }
        if(t>m) return t;
        else return m;
}
int main(){
    vector<int>v={1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(v);
    return 0;
}
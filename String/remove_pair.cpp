#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removePair(string s) {//aa a bb aa cc d
        string ans;           //01 2 34 56 78 9
        int n=s.size();
        
        
        for(int i=0;i<n;i++){
            if(ans.empty())
            {
                ans.push_back(s[i]);
              
            }
            else if(!ans.empty() and ans.back()==s[i]) ans.pop_back();
            
            else{
                ans.push_back(s[i]);
            }
            
        }
        if(ans.empty()) return "-1";
        else return ans;
        
    }
};
int main(){
    Solution s;
    string a="aaabbaaccd";//output ad
    cout<<s.removePair(a);
    return 0;
}
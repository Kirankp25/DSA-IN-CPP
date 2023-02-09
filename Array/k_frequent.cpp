#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k=1;
    vector<int>vp{1};

    vector<int>v;
    int cnt=0;
    int t=vp[0];
    for(int i=0;i<vp.size();i++){
        if(vp[i]==t)cnt++;
        else{
            if(cnt>=k){
                v.push_back(t);
                cnt=0;
                t=vp[i];
                
            }
            }

    }
    if(cnt>=k)
    v.push_back(t);
    for(auto x:v)
    cout<<x<<" ";

}
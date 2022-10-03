#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    
   for(int i=0;i<n;i++)
     cin>>arr[i];

    int i = 0;

    char prev = 'W';
    int cnt_w = 0;
    int cnt_m = 0;
    int ans = 0;

    while(arr[i] == 'M') i++;

     for(;i<n;i++) {

       if(prev == 'W') {
          if(arr[i] == 'W') cnt_w++;
          else {
              cnt_m++;
              ans = max(ans,min(cnt_w,cnt_m));
              cnt_w = 0;
          }
       }else{
         if(arr[i] == 'M') {
            cnt_m++;
         }else{
              cnt_w++;
              ans = max(ans,min(cnt_w,cnt_m));
              cnt_m = 0;
         }
       }

prev = arr[i];

     }

     cout << ans*2 <<endl;

    return 0;
}
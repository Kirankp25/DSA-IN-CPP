#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        while(n--)
        {
            int s=0;
            int e=n-1;
            if(a[s++]==a[e--])
            continue;
            else
            {
                int set=1;
                set<<s;
                
                count++;
            }
            
        }
        cout<<count<<endl;
    }
	return 0;
}
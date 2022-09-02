#include <iostream>
using namespace std;

int main() {
    int i,n,m,a[n][m],s;
    cin>>n;
    for(i=0;i<n;i++)
    {cin>>m;
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {s=0;
        for(int j=0;j<2;j++)
        {
            if(j%2==0)
            s+=abs(a[i][j]);
            if(j%2==1)
            s-=abs(a[i][j]);
        }cout<<s<<endl;
    }

	// your code goes here
	return 0;
}

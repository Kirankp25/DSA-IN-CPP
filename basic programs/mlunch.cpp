#include <iostream>
using namespace std;

int main() {
    int i,j,n,a[n][3];
    cin>>n;;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            int x=a[i][0];
            int y=a[i][1];
            int z=a[i][2];
            if(x>y && x>z)
            {
            cout<<x<<endl;
            break;
            }
            if(y>x&&y>z)
            {
            cout<<y<<endl;
            break;
            }
            if(z>x&&z>y)
            {
            cout<<z<<endl;
            break;
            }
        }
    }
	// your code goes here
	return 0;
}

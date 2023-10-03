
#include <bits/stdc++.h>
using namespace std;

#define R 4
#define C 4


// of matrix row and column respectively
void print(int arr[R][C], int i, int j, int m, int n)
{

	if(i>=n||j>=m) return ;

    //print first row
    for(int p=j;p<n;p++) cout<<arr[i][p]<<" ";

    //print last col
    for(int p=i+1;p<m;p++) cout<<arr[p][n-1]<<" ";

    if(m-1!=i)
        for(int p=n-2;p>i;p--)
            cout<<arr[n-1][p]<<" ";
    
    if(n-1!=j)
        for(int p=m-1;p>j;p--)
            cout<<arr[p][j]<<" ";
    
    print(arr,i+1,j+1,m-1,n-1);
}

// Driver Code
int main()
{
	int a[R][C] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };

	// Function Call
	print(a, 0, 0, R, C);
	return 0;
}
// This Code is contributed by Ankur Goel

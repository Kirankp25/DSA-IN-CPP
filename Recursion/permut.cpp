
#include <bits/stdc++.h>
using namespace std;


void permute(string& a, int l, int r)
{
	// Base case
	
	
		// Permutations made
		for (int i = l; i <= r; i++) {

			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			// permute(a, l + 1, r);

			// // backtrack
			// swap(a[l], a[i]);
		}
	if (l == r){
        cout << a << endl;
        return;

    }
		
}

// Driver Code
int main()
{
	string str = "123";
	int n = str.size();

	// Function call
	permute(str, 0, n - 1);
	return 0;
}

// This is code is contributed by rathbhupendra

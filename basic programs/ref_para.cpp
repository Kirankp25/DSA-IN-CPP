// C++ program to illustrate
// call by reference
#include <iostream>
using namespace std;

void swapnum(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

int main()
{
	int a = 10, b = 20;

	// passing parameters
	swapnum(&a, &b);

	cout <<"a is " << a <<" and b is "<< b;
	return 0;
}

// this code is contributed by shivanisinghss2110

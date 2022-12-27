// C++ program to illustrate
// call by value
#include <iostream>
using namespace std;

void func(int a, int b) //call by value
{
	a += b;//actual value will not change during function operation
	cout <<"In func, a = " << a << " b = "<< b << endl;
}
int main(void)
{
	int x = 5, y = 7;

	// Passing parameters
	func(x, y);
	cout << "In main, x = " << x << " y = " << y;
	return 0;
}



#include <iostream>
#include <array>
using namespace std;

int main() {
	array <int , 3> arr={'G','f','G'}; // ASCII val of 'G' =71
	array <int , 3> arr1={'M','M','P'}; // ASCII val of 'M' = 77 and 'P' = 80
	arr.swap(arr1); // now arr = {M,M,P}
	cout<<arr.front() <<" "<<arr.back();
	return 0;
}

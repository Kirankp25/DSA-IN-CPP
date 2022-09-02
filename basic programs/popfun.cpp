#include <iostream>
#include <vector>
using namespace std;
  
int main()
{
    vector<int> myvector{ 1, 2, 3, 4, 5 };
    myvector.pop_back();
  
    // Vector becomes 1, 2, 3, 4
  
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
}
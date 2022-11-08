
#include<iostream>
#include<iterator>
#include<map>// for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
    // vector<int> ar = { 1, 2, 3, 4, 5 };
      
    // // Declaring iterator to a vector
    // vector<int>::iterator ptr;
      
    // // Displaying vector elements using begin() and end()
    // cout << "The vector elements are : ";
    // for (ptr = ar.begin(); ptr < ar.end(); ptr++)
    //     cout << *ptr << " ";
    //     cout<<endl;
    // for(auto x:ar)
    //     cout<<x<<" ";
      
    map<int, int> g;
    for(int i=0;i<5;i++)
    {
        int a,b;
        cin>>a>>b;
        g.insert(pair<int,int>(a,b));
    }
    // insert elements in random order
    for(auto v:g)
    cout<<v.first<<" "<<v.second<<endl;
    cout<<g.count(5);
    return 0;    
}


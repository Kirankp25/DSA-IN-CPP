#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
int main()
{
    vector<int> vc;
    int element,size;
    cout<<"enter the size of vector=";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>element;
        vc.push_back(element);
    }
    display(vc);
    return 0;
}
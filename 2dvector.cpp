#include<iostream>
#include<vector>
using namespace std;
#define R 5
#define C 5
int main()
{
	vector<vector<int>> vec;
	int n=1;
	for(int i=0;i<R;i++)
	{
		vector<int> v1;
		for(int j=0;j<C;j++)
		{
			v1.push_back(n);
			n+=1;
		}
		vec.push_back(v1);
	}
	for(int i=0;i<R;i++)
	{for(int j=0;j<C;j++)
	{
		cout<<vec[i][j]<<" ";
	}cout<<endl;
	}
	vec[3].pop_back();
	vec[5].pop_back();
	vec[6].pop_back();
	vec[4].pop_back();
	for(int i=0;i<R;i++)
	{for(auto j=vec[i].begin();j!=vec[i].end();j++)
		cout<<*j<<" ";
	cout<<endl;
	}
	return 0;;
	
}

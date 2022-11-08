#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<String,int>marks;
    marks["kiran"]=95;
    marks["karan"]=97;
    marks["varan"]=99;
    map<String,int>::iterator itr;
    for(itr=marks.begin(); itr!=marks.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }

    return 0;
}
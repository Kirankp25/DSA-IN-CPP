//using cin.getline()function you can read data form user 
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char sentence[1000];
    cin.getline(sentence,1000,'.');
    cout<<sentence<<endl;
    cout<<strlen(sentence)<<endl;
    cout<<sizeof(sentence)<<endl;
    return 0;
}
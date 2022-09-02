#include<iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int s=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            int temp=0;
            for(int k=i;k<=j;k++)
            {
                temp+=arr[k];
            }
            if(temp>s)
            s=temp;
            cout<<temp<<endl;
        }
    }
    cout<<"lagest sum is "<<s<<endl;

    return 0;
}
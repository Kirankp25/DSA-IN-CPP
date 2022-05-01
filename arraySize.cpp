#include<iostream>
using namespace std;
void dis(int arr[])
{
    cout<<sizeof(arr)<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5,6,};
    dis(arr);
    cout<<sizeof(arr);
    return 0;

}
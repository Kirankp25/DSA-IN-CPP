//print all spiral element of given matrix
#include<iostream>
using namespace std;
void print(int arr[][100],int n,int m)
{
    int count =0;
    int total=n*m;
    int sr=0;
    int er=n-1;
    int sc=0;
    int ec=m-1;
    while(count<total)
    {
        int r,c;
        for(int c = sc ;c<=ec; c++)//start row
        {
            cout<<arr[sr][c]<<" ";
            count++;
        }
        for(int r = sr + 1 ;r<=er; r++)//end col
        {
            cout<<arr[r][ec]<<" ";
            count++;
        }
        for(int c = ec - 1 ;c>=sc; c--)//end row
        {
            cout<<arr[er][c]<<" ";
            count++;
        }
        for(int r = er - 1 ;r>=sr+1; r--)//start col
        {
            if(sc==ec)
            {
                break;
            }
            cout<<arr[r][sc]<<" ";
            count++;
        }
        sr++;
        er--;
        sc++;
        ec--;
    }
}
int main()
{
    
    int arr[][100]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12}};
                   //{13,14,15,16}};
    int n=3,m=4;
    print(arr,n,m);
    return 0;
}
    

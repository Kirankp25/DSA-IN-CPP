#include<iostream>
using namespace std;
int main()
{
    int i, j;
    char cp;
   
    int rows = 5;
   
    char c = 65+rows;
   
    for (i = 0; i < rows; i++) {

        for (j = 0; j <= i; j++) {
           
            cout << c+j << " ";
           
            c++;
        }
        c=c-(i+1);
        cout << "\n";
    }
    return 0;
}
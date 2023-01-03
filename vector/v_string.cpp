#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
        void print(vector<string> &str){
            int row=str.size();
            int col=str[0].size();
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<str[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};//s
int main(){
    solution s;
    vector<string> str{"KIRAN","PATIL"};
    s.print(str);
    return 0;
}
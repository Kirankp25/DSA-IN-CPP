#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class product{
        int id;
        char name[100];
        int mrp;
        int selling_price;
        public:
        product()           //default function || default constructor
        {
            cout<<"Hello kiran"<<endl;
        }
        product(int id,char *n,int mrp,int selling_price)
        {
            this->id=id;
            this->mrp=mrp;
            this->selling_price=selling_price
            strcpy(name,n);
        }
        //setter
        void setmrp(int price)       //public member functions
        {
        mrp=price;
        }
        void setselling_price(int price)
        {
        selling_price=price;
        }
        //getter
        int getmrp()
        {
        return mrp;
        }
        int getselling_price()
        {
            return selling_price;
        }

};
int main()
{
    product camera(101,"kiran",2000,1800);

    // camera.setmrp(100);
    // camera.setselling_price(200);
    
    cout<<sizeof(camera)<<endl;
    cout<<"MRP="<<camera.getmrp()<<endl;
    cout<<"selling price="<<camera.getselling_price()<<endl;
}
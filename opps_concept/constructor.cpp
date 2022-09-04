#include<iostream>
using namespace std;

class product{
        int id;
        char name[100];
        int mrp;
        int selling_price;
        public:
        product()           //default function
        {
            cout<<"Hello kiran"<<endl;
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
    product camera;

    camera.setmrp(100);
    camera.setselling_price(200);
    
    cout<<sizeof(camera)<<endl;
    cout<<"MRP="<<camera.getmrp()<<endl;
    cout<<"selling price="<<camera.getselling_price()<<endl;
}
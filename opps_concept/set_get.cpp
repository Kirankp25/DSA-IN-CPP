#include<iostream>
using namespace std;

class product{              //class
        int id;
        char name[100];         //private data members
        int mrp;
        int selling_price;

    public:
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

    // camera.mrp=100;
    // camera.selling_price=200;
    camera.setmrp(100);             //function calling by using object camera
    camera.setselling_price(200);

    
    cout<<sizeof(camera)<<endl;
    cout<<"MRP="<<camera.getmrp() <<endl;
    cout<<"selling price="<<camera.getselling_price() <<endl;
}
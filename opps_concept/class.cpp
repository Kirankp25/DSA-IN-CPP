#include<iostream>
using namespace std;

class product{
        int id;
        char name[100];

    public:
        int mrp;
        int selling_price;

};
int main()
{
    product camera;

    camera.mrp=100;
    camera.selling_price=200;
    
    cout<<sizeof(camera)<<endl;
    cout<<"MRP="<<camera.mrp<<endl;
    cout<<"selling price="<<camera.selling_price<<endl;
}
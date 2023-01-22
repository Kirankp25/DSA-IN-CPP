#include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!"<<endl;
      display();
    }
  protected:
    void disply(){
        cout<<"Kiran";
    }
};

int main() {
  MyClass m;    // Create an object of MyClass (this will call the constructor)
 // m.disply();
  return 0;
}

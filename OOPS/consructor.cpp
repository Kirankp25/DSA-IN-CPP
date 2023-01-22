#include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    MyClass(string name) {     // Constructor
      cout <<"I'm "<<name;
    }
};

int main() {
  MyClass myObj("Kiran");    // Create an object of MyClass (this will call the constructor)
  return 0;
}
// copy constructor
// parameterized constructor
// default constructor
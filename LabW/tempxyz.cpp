#include<iostream>
using namespace std;
class BaseforVirtual {
public:
    virtual void show() {   // virtual function
        cout << "This is Base class show()" << endl;
    }
};

class DerivedforVirtual : public BaseforVirtual {
public:
    void show() {   // overriding
        cout << "This is Derived class show()" << endl;
    }
};

int main() {
    BaseforVirtual* b;
    DerivedforVirtual d;

    b = &d;      // base class pointer → derived object
    b->show();   // calls Derived version (runtime binding)

    return 0;
}
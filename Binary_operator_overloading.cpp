#include <iostream>
using namespace std;
class MyClass
{
    int a, b;

public:
    MyClass()
    {
        a = 0;
        b = 0;
    }
    MyClass(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout << "\nValue of a : " << a;
        cout << "\nValue of b : " << b;
    }

    MyClass operator=(MyClass obj)
    {
        a = obj.b;
        b = obj.a;
        return *this;
    }
};

int main() 
{
    MyClass x(4, 5);
    MyClass z = x;
    z.display();
}
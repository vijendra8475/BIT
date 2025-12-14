#include <iostream>
using namespace std;
class x
{
    int a;

public:
    x()
    {
        a = 0;
    }
    x(int x)
    {
        a = x;
    }

    void operator-()
    {
        a = -a;
    }

    void display()
    {
        cout << "value of a : " << a;
    }
};

int main()
{
    x obj(5);
    -obj;
    obj.display();
}
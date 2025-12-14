#include <iostream>
using namespace std;
// class x
// {
//     int a;

// public:
//     x()
//     {
//         a = 0;
//     }
//     x(int x)
//     {
//         a = x;
//     }

//     // for normal
//     // void operator-()
//     // {
//     //     a = -a;
//     // }

//     // using friend funtion
//     friend x operator-(x obj);

//     void display()
//     {
//         cout << "value of a : " << a;
//     }
// };

// x operator-(x obj) {
//     obj.a = -obj.a;
//     return obj;
// }

// for adding complex numbers
class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }

    complex(int a,int b) {
        real = a;
        img = b;
    }

    // using friend function
    friend complex operator+(complex obj1, complex obj2);
    friend complex operator-(complex obj1, complex obj2);
    friend complex operator*(complex obj1, complex obj2);
    friend complex operator/(complex obj1, complex obj2);

    // relational operator overloading
    friend bool operator>(complex obj1, complex obj2);
    friend bool operator<(complex obj1, complex obj2);
    friend bool operator==(complex obj1, complex obj2);
    friend bool operator!=(complex obj1, complex obj2);
    friend bool operator>=(complex obj1, complex obj2);
    friend bool operator<=(complex obj1, complex obj2);

    void display() {
        cout << "Real : " << real;
        cout << "\nImg : " << img;
    }

};

complex operator+(complex obj1, complex obj2) {
    complex temp;
    temp.real = obj1.real + obj2.real;
    temp.img = obj1.img + obj2.img;
    return temp;
}
complex operator-(complex obj1, complex obj2) {
    complex temp;
    temp.real = obj1.real - obj2.real;
    temp.img = obj1.img - obj2.img;
    return temp;
}
complex operator*(complex obj1, complex obj2) {
    complex temp;
    temp.real = obj1.real * obj2.real;
    temp.img = obj1.img * obj2.img;
    return temp;
}
complex operator/(complex obj1, complex obj2) {
    complex temp;
    temp.real = obj1.real / obj2.real;
    temp.img = obj1.img / obj2.img;
    return temp;
}

bool operator>(complex obj1, complex obj2) {
    return (obj1.real > obj2.real) && (obj1.img > obj2.img);
}

bool operator<(complex obj1, complex obj2) {
    return (obj1.real < obj2.real) && (obj1.img < obj2.img);
}

bool operator==(complex obj1, complex obj2) {
    return (obj1.real == obj2.real) && (obj1.img == obj2.img);
}

bool operator!=(complex obj1, complex obj2) {
    return (obj1.real != obj2.real) || (obj1.img != obj2.img);
}

bool operator>=(complex obj1, complex obj2) {
    return (obj1.real >= obj2.real) && (obj1.img >= obj2.img);
}

bool operator<=(complex obj1, complex obj2) {
    return (obj1.real <= obj2.real) && (obj1.img <= obj2.img);
}

int main()
{
    complex obj(4,5);
    complex obj2(2,3);

    bool obj3 = obj > obj2;
    cout << (obj3);
}
#include<iostream>
using namespace std;

class a {
    int a;
    public :
            void input(){
                cout << "Enter a : ";
                cin >> a;
            }
            void output() {
                cout << "Value of a is : " << a;
            }
};

class Mom;
class Dad {
    int salary;
    public :
            Dad(){
                salary = 0;
            }
            Dad(int sal){
                salary = sal;
            }
            friend int totalSalary(Dad d, Mom m);
};
class Mom {
    int salary;
    public :
            Mom(){
                salary = 0;
            }
            Mom(int sal){
                salary = sal;
            }
            friend int totalSalary(Dad d, Mom m);
};

int totalSalary(Dad d, Mom m) { 
    return d.salary + m.salary;
}


int main() {
    Dad d(50000);
    Mom m(45000);
    cout << totalSalary(d,m);

}
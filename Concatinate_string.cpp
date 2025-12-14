#include<iostream>
using namespace std;
class xyz{
    string name;
    public :
            xyz() {name = "";}
            xyz(string name) { this-> name = name;}

            xyz operator+(xyz obj) {
                xyz temp;
                temp = name + obj.name;
                return temp;
            }
            void display(){
                cout << "\nName : " << name;
            }
};

int main() {
    xyz obj1("vijju");
    xyz obj2(" verma");
    xyz obj3 = obj1 + obj2;
    obj3.display();
}
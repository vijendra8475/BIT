#include<iostream>
using namespace std;

class Counter {
    int a;
    public :
            Counter(){ a = 0;}
            Counter(int z) {
                a = z;
            }

            // for pre decrement 
            Counter operator--(){
                Counter temp;
                temp.a = --a;
                return temp;
            }

            // for post decrement
            Counter operator--(int) {
                Counter temp;
                temp.a = a--;
                return temp;
            }

            // using this 
            Counter operator--(int){
                a--;
                return *this;
            }

            // using constructor
            Counter operator--(int) {
                return(Counter(a--)); // firstly return the value then decrement
            }

            void display() {
                cout << "value of a : " << a;
            }
};



int main(){
    Counter obj(5);
    obj = obj--;
    obj.display();
}
#include<iostream>
using namespace std;
int main() {
    // --------------- WAP for check entered year is leap year or not
    // int year;
    // cout << "Enter a year: ";
    // cin >> year;
    // if(year % 100 == 0) {
    //     if(year % 400 == 0) {
    //         cout << year << " is a leap year";
    //     }
    //     else {
    //         cout << year << " is not a leap year";
    //     }
    // }
    // else if(year % 4 == 0) {
    //     cout << year << " is a leap year";
    // }
    // else {
    //     cout << year << " is not a leap year";
    // }



    // ------------------ WAP for (a+b)^3
    // int a, b;
    // cout << "Enter a: ";
    // cin >> a;
    // cout << "Enter b: ";
    // cin >> b;
    // int res = (a + b) * (a + b) * (a + b);
    // cout << res;



    // ------------------ WAP for converting fahrenheit to celcious
    int fahrenheit;
    cout << "Enter degree in fahrenheit : ";
    cin >> fahrenheit;
    int celcious = ((fahrenheit * (9/5)) + 32);

    cout << "Degree in celcious : " << celcious;

}
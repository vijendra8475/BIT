#include<iostream>
using namespace std;

// Functions
// syntax
// return_type function_name(arguments){
//     code to be executed;
//     return statement
// }

void noArgNoRet() {
    cout << "This is No Argument No Return Function" << endl;
}

float noArgbutRet() {
    return 3.14;
}

void argButNoRet(int a) {
    cout << "This is Argument but not Return which get argument whose value is : " << a << endl;
}

int argWithRet(int a,int b) {
    cout << "This is Argument with Return Function which get value : " << a << b << " and return their sum" << endl;;
    return a+b;
}

int calc_Sum_btw_1_to_n(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int factorial_of_n(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int sum_of_digit_of_numbers(int n) {
    int sum = 0;
    while (n)
    {
        sum += (n%10);
        n /= 10;
    }
    return sum;
}

int bionomial_cofficient(int n,int r) {
    int bioCofficient = factorial_of_n(n) / (factorial_of_n(r) * factorial_of_n(n - r));
    return bioCofficient;
}

int main(){

    // There are Four type of function in CPP
    // 1.No Argument No return
    // noArgNoRet();

    // 2. No Argument but Return
    // float pei = noArgbutRet();
    // cout << "This is No Argument but Return Funtion that return value of Pie that is : " << pei << endl;;

    // 3. Argument but No Return
    // argButNoRet(5);

    // 4. Argument with return 
    // int sum = argWithRet(4,5);
    // cout << "The value return from Argument with Return is " << sum;
    
    // Function to calculate the sum numbers between 1 to n
    // int sum = calc_Sum_btw_1_to_n(5);
    // cout << "Their answer is : " << sum;

    cout << "Bionomial Cofficient of 8 and 2 is : " << bionomial_cofficient(8,2);
}
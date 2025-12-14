#include<iostream>
using namespace std;

int main() {

    // square numaric pattern
    /* for(int i=0; i<4; i++){
        for(int j=1; j<=4; j++)
            cout << j;
        cout << endl;
    } */

    // square alphabetic pattern
    // for(int i=0; i<4; i++){
    //     for(char a = 'a'; a<='d'; a++){
    //         cout << a << " ";
    //     }
    //     cout << endl;
    // }

    // square sequentially numeric pattern
    int z = 1;
    char a = 'a';
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++) {
    //         cout << z << " ";
    //         z++;      
    //     }
    //     cout << endl;
    // }


    // right angle triangle pattern
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<=i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // outter loop value print pattern
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<=i; j++){
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }

    // inner loop value print pattern
    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<=i; j++){
    //         cout << j+1 << " ";
    //     }
    //     cout << endl;
    // }

    // [ Reverse Triangle Pattern ] inner loop reverse print pattern 
    int num = 4;
    // for(int i=0; i<num; i++) {
    //     for(int j=i+1; j>0; j-- ) {
    //         cout << j << " " ;
    //     }
    //     cout << endl;
    // } 

    // Reverse Triangle Pattern Alphabetic version
    // for(int i=0; i<num; i++) {
    //     for(int j=0; j<=i; j++) {
    //         cout << a << " ";
    //         a++;
    //     }
    //     cout << endl;
    // }


    // floyd's triangle pattern
    // for(int i=0; i<num; i++) {
    //     for(int j=0; j<=i; j++){
    //         cout << z << " ";
    //         z++;
    //     }
    //     cout << endl;
    // }

    // floyd's triangle pattern
    // for(char i='a'; i<'e'; i++) {
    //     for(char j=i; j>='a'; j-- ){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }


    // Inverted Triangle Pattern
    // for(int i=0; i<num; i++) {
    //     for(int j=0; j<i; j++) {
    //         cout << "  ";
    //     }
    //     for(int j=0; j<num-i; j++){
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }


    // Pyramid Pattern
    // for(int i=0; i<num; i++){
    //     for(int j=num-1; j>i; j--){
    //         cout << "  ";
    //     }

    //     for(int j=1; j<=i+1; j++) {
    //         cout << j << " ";
    //     }
        
    //     for(int j=1; j<=i; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }


    // Hallow Daimond Pattern
    // for(int i=0; i<num; i++) {
    //     for(int j=num-1; j>i; j--){
    //         cout << "  ";
    //     }
        
    //     cout << "* ";
        
    //     for(int j=1; j<=(i*2)-1; j++){
    //         cout << "  ";
    //     }

    //     if(i!=0){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    // for(int i=0; i<num-1; i++){
    //     for(int j=0; j<=i; j++){
    //         cout << "  ";
    //     }
    //     cout << "* ";

    //     for(int j=0; j<2*(num-i-2)-1; j++)
    //         cout << "  ";

    //     if(i!=num-2){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Butterfky Pattern
    for(int i=0; i<num; i++) {
        for(int j=0; j<=i; j++)
            cout << "* ";
        
        for(int j=1; j<=2*(num-1-i); j++)
            cout << "  ";

        for(int j=0; j<=i; j++)
            cout << "* ";
        cout << endl;
    }

    for(int i=0; i<num; i++){
        for(int j=0; j<num-i; j++)
            cout << "* ";

        for(int j=0; j<i; j++)
            cout << "  ";

        for(int j=0; j<i; j++)
            cout << "  ";

        for(int j=0; j<num-i; j++)
            cout << "* ";
        cout << endl;
    }
}
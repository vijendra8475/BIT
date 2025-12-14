#include<iostream>
using namespace std;
int main() {
    int x = 3;
    int n = 5;
    int ans = 1;
    int binary = n;
    while (binary)
    {
        if(binary % 2)
            ans *= x;
        x *= x;
        binary /=2;
    }
    
    cout << ans;
}
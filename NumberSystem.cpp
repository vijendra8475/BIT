#include <iostream>
using namespace std;

int decimal_to_binary(int n)
{
    int ans = 0;
    int pow = 1;
    while (n)
    {
        int temp = n % 2;
        temp *= pow;
        ans = temp + ans;
        pow *= 10;
        n /= 2;
    }
    return ans;
}

int binary_to_decimal(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int temp = n % 10;
        temp *= pow;
        ans += temp;
        n /= 10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    // decimal to binary
    int getDecimalFromBinary = binary_to_decimal(11001);
    cout << getDecimalFromBinary;
    return 0;
}
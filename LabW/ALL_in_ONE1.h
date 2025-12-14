#include <iostream>
#include <cctype>
#include <string.h>
#include <vector>
using namespace std;

// 1. Addition of two numbers
void add2()
{
    int a, b;
    cout << "\nEnter two numbers : ";
    cin >> a >> b;
    int sum = a + b;
    cout << "\nSum of two numbers : " << sum;
}

// 2 division
void div()
{
    int a, b;
    cout << "\nEnter two numbers : ";
    cin >> a >> b;
    int div = a / b;
    cout << "\nSum of two numbers : " << div;
}

// 3. Average of 5 subject marks
void average_of_5_marks()
{
    int s1, s2, s3, s4, s5, avg;
    cout << "\nEnter marks for 5 subject : ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    avg = (s1 + s2 + s3 + s4 + s5) / 5;
    cout << "\nverage of 5 subjects : " << avg;
}

// 4. area of Rectangle
void area_of_reactangle()
{
    int l, b, area;
    cout << "\nEnter length and breadth for rectangle : ";
    cin >> l >> b;
    area = l * b;
    cout << "\nArea of Rectangle : " << area;
}

// Fahrenheit to celcius
void temperature_converion()
{
    float c, f, celcious_conv, fah_conv;
    cout << "\nEnter temperature in celcious & fahrenheit : ";
    cin >> c >> f;

    celcious_conv = (f - 32) / (1.8);
    cout << "\nFahrenheit temperature in celcious : " << celcious_conv;

    fah_conv = c * 9 / 5 + 32;

    cout << "\nCelcious temperature in fahrenheit :  " << fah_conv;
}

// 6. WAP to find (a+b)^3
void whole_cube()
{
    int a, b, whole_cube;
    cout << "\nEnter values for a & b : ";
    cin >> a >> b;

    whole_cube = (a * a * a) + (b * b * b) + (3 * (a * a) * b) + (3 * a * b * b);
    cout << "\nwhole cube of " << a << " & " << b << " : " << whole_cube;
}

// 7.Number is even and odd
void check_even_or_odd()
{
    int num;
    cout << "\nEnter a number : ";
    cin >> num;

    if (num % 2 == 0)
        cout << "\nEntered number is even ";
    else
        cout << "\nEntered number is odd";
}

// 8.leap year or not
void leap_year()
{
    int year;
    cout << "\nEnter a year : ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "\nEntered year is leap year";
    }
    else
    {
        cout << "\nENter year is not a leap year";
    }
}

void validTriangle()
{
    float s1, s2, s3;
    cout << "\nEnter 3 side of triangle : ";
    cin >> s1 >> s2 >> s3;

    if ((s1 + s2) > s3 && (s2 + s3) > s1 && (s1 + s3) > s2)
        cout << "\nTriangle is valid";
    else
        cout << "\nTriangleis valid";
}

// 10. Find grad using percentage
void findGrad()
{
    float percentage;

    cout << "Enter percentage: ";
    cin >> percentage;

    if (percentage >= 80)
    {
        cout << "A Grade";
    }
    else if (percentage >= 60)
    {
        cout << "B Grade";
    }
    else if (percentage >= 50)
    {
        cout << "C Grade";
    }
    else if (percentage >= 40)
    {
        cout << "Pass Only";
    }
    else
    {
        cout << "Fail";
    }
}

// 11. Find How Much Old You Are (Years, Months, Days)
void findAge()
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int bd, bm, by; // birth day, month, year
    int pd, pm, py; // present day, month, year
    int y, m, d;

    cout << "Enter DOB (dd mm yyyy): ";
    cin >> bd >> bm >> by;

    cout << "Enter Present Date (dd mm yyyy): ";
    cin >> pd >> pm >> py;

    // Calculate years
    y = py - by;

    // Calculate months
    if (pm < bm)
    {
        y--;
        m = 12 - (bm - pm);
    }
    else
    {
        m = pm - bm;
    }

    // Calculate days
    if (pd < bd)
    {
        m--;
        d = months[pm - 1] - (bd - pd);
    }
    else
    {
        d = pd - bd;
    }

    cout << "\nYou are " << y << " years "
         << m << " months "
         << d << " days old.";
}

// 12. Find Minimum and Maximum Among 3 Numbers
void min_and_max_among_3()
{
    int nums[3];

    cout << "Enter three numbers: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }

    int min = nums[0];
    int max = nums[0];

    for (int i = 1; i < 3; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    cout << "Maximum : " << max << endl;
    cout << "Minimum : " << min << endl;
}
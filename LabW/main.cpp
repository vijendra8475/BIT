#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <queue>
#include <cctype>
#include <ctime>
#include <algorithm>
#include <vector>
#include <ALL_in_ONE1.h>
#include<ALL_in_ONE2.h>
#include <list>

using namespace std;




int main()
{
    int choice;

    do
    {
        cout << "\n\n==================== MAIN MENU ====================\n";
        cout << "1. Basic Programs (1–12)\n";
        cout << "2. OOP Programs (13–18)\n";
        cout << "3. Number & String Programs (19–24)\n";
        cout << "4. Sorting & Matrix Programs (25–27)\n";
        cout << "5. Inheritance Programs (28–29)\n";
        cout << "6. Neon Number (30)\n";
        cout << "7. Array Operations (31–35)\n";
        cout << "8. Stack Operations (36–38)\n";
        cout << "9. Queue Operations (39–41)\n";
        cout << "10. Linked List Operations (42–45)\n";
        cout << "11. Tree Operations (46–50)\n";
        cout << "12. Graph Operations (51–54)\n";
        cout << "0. Exit\n";
        cout << "==================================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: {
            int ch;
            cout << "\n--- BASIC PROGRAMS ---\n";
            cout << "1.Add 2.Divide 3.Average 4.Rectangle Area\n";
            cout << "5.Temp Conversion 6.(a+b)^3 7.Even/Odd 8.Leap Year\n";
            cout << "9.Valid Triangle 10.Grade 11.Age 12.Min/Max\n";
            cin >> ch;

            switch (ch)
            {
            case 1: add2(); break;
            case 2: div(); break;
            case 3: average_of_5_marks(); break;
            case 4: area_of_reactangle(); break;
            case 5: temperature_converion(); break;
            case 6: whole_cube(); break;
            case 7: check_even_or_odd(); break;
            case 8: leap_year(); break;
            case 9: validTriangle(); break;
            case 10: findGrad(); break;
            case 11: findAge(); break;
            case 12: min_and_max_among_3(); break;
            default: cout << "Invalid choice";
            }
            break;
        }

        case 2: {
            int ch;
            cout << "\n--- OOPS PROGRAMS ---\n";
            cout << "13.Class/Object\n14.Function Outside Class\n";
            cout << "15.Friend Function\n16.Function Overloading\n";
            cout << "17.Nelson Number\n18.Factorial\n";
            cin >> ch;

            switch (ch)
            {
            case 13: functionFor13(); break;
            case 14: functionFor14(); break;
            case 15: functionFor15(); break;
            case 16: functionFor16(); break;
            case 17: functionFoe17(); break;
            case 18: functionFor18(); break;
            default: cout << "Invalid choice";
            }
            break;
        }

        case 3: {
            int ch;
            cout << "\n--- NUMBER & STRING ---\n";
            cout << "19.Armstrong 20.Sum of Digits 21.Uppercase\n";
            cout << "22.Date Diff 23.Pyramid 24.Name Sort\n";
            cin >> ch;
            cin.ignore();

            switch (ch)
            {
            case 19: functionFor19(); break;
            case 20: functionOf20(); break;
            case 21: functionOf21(); break;
            case 22: date_diff_between_2_dates(); break;
            case 23: makePyramid(); break;
            case 24: functionOf24(); break;
            default: cout << "Invalid choice";
            }
            break;
        }

        case 4: {
            int ch;
            cout << "\n--- SORTING & MATRIX ---\n";
            cout << "25.Bubble Sort 26.2D Array 27.Matrix Sum\n";
            cin >> ch;

            switch (ch)
            {
            case 25: sortNums(); break;
            case 26: array2d(); break;
            case 27: matrix_multiplication(); break;
            default: cout << "Invalid choice";
            }
            break;
        }

        case 5: {
            int ch;
            cout << "\n--- INHERITANCE ---\n";
            cout << "28.Simple 29.Multiple\n";
            cin >> ch;

            switch (ch)
            {
            case 28: functionOf28(); break;
            case 29: functionOf29(); break;
            default: cout << "Invalid choice";
            }
            break;
        }

        case 6:
            checkNeon();
            break;

        case 7:
            functionOf31to33();
            break;

        case 8:
            functionFrom36to38();
            break;

        case 9:
            functionsFrom39t041();
            break;

        case 10:
            functionsOfLinkedlinkedList();
            break;

        case 11: {
            vector<int> preorder = {1, 2, -1, -1, 3, -1, -1};
            index = -1;
            Node *root = buildTree(preorder);

            cout << "\nPreorder : ";
            preOrderTraversal(root);

            cout << "\nInorder : ";
            inOrderTraversal(root);

            cout << "\nPostorder : ";
            postOrderTraversal(root);
            break;
        }

        case 12:
            functionsForGaph();
            break;

        case 0:
            cout << "Exiting Program...";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 0);

    return 0;
}

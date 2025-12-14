#include <iostream>
#include <conio.h>
using namespace std;

int traverseArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Algorithm for inserting an element into an array:
// 1. Check if the position is valid (0 <= position <= size).
// 2. Shift all elements from the end to the position one step to the right.
// 3. Insert the new element at the specified position.
// 4. Increase the size of the array by 1.

int insertIntoArray(int arr[], int size, int element, int position)
{
    if (position < 0 || position > size)
    {
        cout << "Invalid position!" << endl;
        return size;
    }

    for (int i = size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    return size + 1;
}

// int deleteFromArray(int arr[], int size, int position) {
//     if(position < 0 || position >= size) {
//         cout << "Invalid position!" << endl;
//         return size;
//     }
//     for(int i=position; i<size-1; i++) {
//         arr[i] = arr[i+1];
//     }
//     return size - 1;
// }

int deleteFromArray(int arr[], int size, int position)
{
    if (position < 0 || position >= size)
    {
        cout << "Invalid position!" << endl;
        return size;
    }

    for(int i=position-1; i<size; i++)
        arr[i] = arr[i+1];

    return size-1;
}

int main()
{

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int choice, size = n;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Traverse Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Array elements: ";
            traverseArray(a, size);
            break;
        case 2:
        {
            int element, position;
            cout << "Enter element to insert: ";
            cin >> element;
            cout << "Enter position (0-based index): ";
            cin >> position;
            size = insertIntoArray(a, size, element, position);
            break;
        }
        case 3:
        {
            int position;
            cout << "Enter position to delete (0-based index): ";
            cin >> position;
            size = deleteFromArray(a, size, position);
            break;
        }
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);
}
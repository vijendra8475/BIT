#include <iostream>
using namespace std;
#define max 5
class queue
{
    int top;
    int bottom;
    int queue2[max];

public:
    queue(){
        top = -1;
        bottom = -1;
    }
    void push();
    void pop();
    void traverse();
};

void queue ::push()
{
    if (top == max - 1)
    {
        cout << "\nQueue Overflow";
        return;
    }
    int item;
    cout << "\nEnter item which you want to insert : ";
    cin >> item;

    if(top == -1)
        bottom = 0;
    top++;
    queue2[top] = item;
}

void queue ::pop()
{
    if (top == -1 || bottom > top)
    {
        cout << "\nStack underflow";
        return;
    }

    int item = queue2[bottom];

    if (top == bottom)
    {
        top = -1;
        bottom = -1;
    }
    else
    {
        bottom++;
    }
    cout << bottom << " " << top;

    cout << "\npoped item : " << item;
}

void queue ::traverse()
{
    if (top == -1)
    {
        cout << "Queue underflow";
        return;
    }

    cout << "\nQueue elements are : ";
    for (int i = bottom; i <= top; i++)
    {
        cout << " " << queue2[i];
    }
}

int main()
{
    queue q;
    int choice;
    do
    {
        cout << "\n\nQueue Operations Menu:";
        cout << "\n1. Push (Enqueue)";
        cout << "\n2. Pop (Dequeue)";
        cout << "\n3. Traverse (Display)";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            q.push();
            break;
        case 2:
        {
            q.pop();
            break;
        }
        case 3:
            q.traverse();
            break;
        case 4:
            cout << "\nExiting...";
            break;
        default:
            cout << "\nInvalid choice. Please try again.";
        }
    } while (choice != 4);
}
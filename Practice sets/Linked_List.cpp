#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class list
{
public:
    node *head = NULL;

    void push_front(int val)
    {
        node *temp = new node(val);
        head -> prev = temp;
        temp-> next = head;
        head = temp;
    }

    void peek(){
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        
    }
};

int main()
{
    list ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);

    ll.peek();
}
#include <iostream>
using namespace std;
class node {
    public :
            int data;
            node * next;
            node(){
                next = NULL;
            }
            node(int x){
                data = x;
                next = NULL;
            }
};

class list {
    public :
            node * head;
            node * tail;
            list(){
                head = NULL;
                tail = NULL;
            }
            void push(){
                node * new_node = new node;
                if(!new_node){
                    cout << "\nMemory overflow";
                    return;
                }
                int item;
                cout << "\nEnter item which you want to insert : ";
                cin >> item;
                new_node -> data = item;
                if(head == NULL){
                    head = new_node;
                }
                else {
                    new_node -> next = head;
                    head = new_node;
                }
                cout << "\nNode inserted in list";
            }
            void pop(){
                if(head == NULL){
                    cout << "\nList is empty";
                    return;
                }
                node * temp = head;
                head = head -> next;
                cout << "\n" << temp -> data << " item deleted";
                delete temp;
                return;
            }
            void show(){
                if(head == NULL){
                    cout << "\nList is empty";
                    return;
                }
                node *temp = head;
                cout << "\nList items are : ";
                while (temp != NULL)
                {
                    cout << temp -> data << " ";
                    temp = temp -> next;
                }
            }
};

void push(int &top, int max, int *stack, int item)
{
    if (top == max - 1)
    {
        cout << "\nStack overflow";
    }
    else
    {
        top++;
        stack[top] = item;
        cout << "\nItem inserted successfully completed";
    }
    return;
}

void pop(int &top, int max, int stack[]){
    if(top == -1){
        cout << "\nStack underflow";
    }
    else{
        cout << stack[top] << " is deleted";
        top--;
    }
    return;
}

void show(int &top,int max, int *stack){
    if(top == -1){
        cout << '\nStack is empty';
    }
    else{
        cout << "\nSTack stats : " << top << "\t" << max;
        cout << "\nStack items are : ";
        for(int i=0; i<=top; i++){
            cout << "\t" << stack[i];
        }
    }
}


int main()
{
    int max = 5;
    int stack[max];
    int top = -1;
    int bottom = -1;
    int choice, item;

    do
    {
        cout << "\n\Queue Operations:";
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Peek";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter item to push: ";
            cin >> item;
            push(top, max, stack, item);
            break;

        case 2:
            pop(top, max, stack);
            break;

        case 3:
            show(top, max, stack);
            break;

        case 4:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid choice!";
        }
    } while (choice != 4);
}
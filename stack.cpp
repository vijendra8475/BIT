#include<iostream>
using namespace std;

void push(int &top, int &max, int stack[], int item) {
    if(top == max-1) {
        cout << "Stack is full";
    }
    else {
        top++;
        stack[top] = item;
    }
    return;
}

void pop(int &top, int &max, int stack[]){
    if(top == -1) {
        cout << "Stack is empty";
    }
    else {
        cout << "Popped element is: " << stack[top] << endl;
        top--;
    }
    return;
}

void peek(int &top, int &max, int stack[]){
    if(top == -1) {
        cout << "Stack is empty";
    }
    else {
        cout << "Stack elements are : " ;
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int max = 5;
    int stack[max];
    int top = -1;
    int choice, item;
    
    do {
        cout << "\n\nStack Operations:";
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Peek";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter item to push: ";
                cin >> item;
                push(top, max, stack, item);
                break;
            
            case 2:
                pop(top, max, stack);
                break;
            
            case 3:
                peek(top, max, stack);
                break;
            
            case 4:
                cout << "Exiting program...";
                break;
                
            default:
                cout << "Invalid choice!";
        }
    } while(choice != 4);
    
}
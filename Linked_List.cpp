#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class list
{
public:
    node *head;
    node *tail;
    list()
    {
        head = tail = NULL;
    }

    void push_front(int data)
    {
        node *new_node = new node(data);

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }

    void push_back(int data)
    {
        node *nodex = new node(data);
        if (head == NULL)
        {
            head = nodex;
            tail = nodex;
        }
        else
        {
            tail->next = nodex;
            tail = nodex;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "\nLinked List has no node";
            return;
        }

        node *item = head;
        head = head->next;
        item->next = NULL;

        cout << "\nPoped element is : " << item->data << endl;
        delete item;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "\nList has no element";
            return;
        }

        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        node *del = tail;
        tail = temp;

        cout << "\nPoped element is : " << temp->data << endl;
        delete del;
    }

    void insert_middle(int pos, int data)
    {

        node *nodex = new node(data);
        nodex->data = data;

        if (head == NULL)
        {
            head = nodex;
            tail = nodex;
        }
        else
        {
            if (pos == 0)
            {
                nodex->next = head;
                head = nodex;
            }
            else
            {
                node *temp = head;

                for (int i = 0; i < pos - 1; i++)
                    temp = temp->next;

                nodex->next = temp->next;
                temp->next = nodex;
            }
        }
    }

    int searchWithPosition(int pos)
    {
        if (pos < 0)
        {
            cout << "\nInvalid position";
            return -1;
        }

        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
            temp = temp->next;

        return temp->data;
    }

    void traverse()
    {
        node *temp = head;
        cout << "\nList elemenets are : ";
        while (temp != NULL)
        {
            cout << " " << temp->data;
            temp = temp->next;
        }
    }

    node *revList()
    {
        node *prev = NULL;
        node *curr = head;
        node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }
};

int main()
{
    list ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);

    // ll.push_back(100);

    // ll.pop_back();

    // ll.insert_middle(2, 100);

    // cout << "\ndata at position 2 : " << ll.searchWithPosition(2);
    ll.traverse();
    list *l2 = new list();
    l2->head = ll.revList();

    l2->traverse();
}
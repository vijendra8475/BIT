
// 13. OOPs comcept / class and object
class Stu
{
private:
    int rollNo;
    char name[25];

public:
    void get()
    {
        cout << "Enter Roll No.: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "\nName : " << name;
        cout << "\nRoll No. : " << rollNo;
    }
};

void functionFor13()
{
    Stu s1;

    s1.get();
    s1.display();
}

// 14. Function Definition Outside Class
class Employee
{
private:
    int salary;
    int empID;

public:
    void get();     // function declaration
    void display(); // function declaration
};

// Function definition outside the class
void Employee::get()
{
    cout << "Enter Employee ID and Salary: ";
    cin >> empID >> salary;
}

// Function definition outside the class
void Employee::display()
{
    cout << "\nEmployee ID : " << empID;
    cout << "\nSalary : " << salary;
}

void functionFor14()
{
    Employee emp1;

    emp1.get();
    emp1.display();
}

// 15. Add Two Complex Numbers Using Friend Function
class Complex
{
private:
    float real, img;

public:
    void get()
    {
        cout << "Enter real and imaginary part: ";
        cin >> real >> img;
    }

    void display()
    {
        cout << real << " + " << img << "i";
    }

    // Friend function declaration
    friend Complex AddComplex(Complex obj1, Complex obj2);
};

// Friend function definition
Complex AddComplex(Complex obj1, Complex obj2)
{
    Complex temp;

    temp.real = obj1.real + obj2.real;
    temp.img = obj1.img + obj2.img;

    return temp;
}

void functionFor15()
{
    Complex c1, c2, c3;

    c1.get();
    c2.get();

    c3 = AddComplex(c1, c2);

    cout << "\nSum of complex numbers: ";
    c3.display();
}

// 16. Function Overloading for Addition
// Function with 2 arguments
int add(int a, int b)
{
    return a + b;
}

// Function with 3 arguments (overloaded)
int add(int a, int b, int c)
{
    return a + b + c;
}

void functionFor16()
{
    int a = add(5, 4);
    cout << "Addition of 5 & 4 is : " << a << endl;

    int c = add(10, 20, 30);
    cout << "Sum of 10, 20 & 30 is : " << c << endl;
}

// 17. Check Nelson Number (Using Constructor)
class Nelson
{
private:
    int num;

public:
    // Constructor
    Nelson(int n)
    {
        num = n;
    }

    void checkNelson()
    {
        if (num % 111 == 0)
        {
            cout << "Nelson Number";
        }
        else
        {
            cout << "Not a Nelson Number";
        }
    }
};
void functionFoe17()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Nelson obj(n); // constructor is called
    obj.checkNelson();
}

// 18. Factorial Using Operator Overloading
class Factorial
{
private:
    int num;

public:
    // Default constructor
    Factorial()
    {
        num = 0;
    }

    // Parameterized constructor
    Factorial(int n)
    {
        num = n;
    }

    // Operator overloading for !
    int operator!()
    {
        int fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        return fact;
    }
};

void functionFor18()
{
    int n = 5;

    Factorial obj(n);
    int c = !obj; // calling overloaded ! operator

    cout << "Factorial of " << n << " is " << c;
}

// 19. Check Armstrong Number
bool is_Armstrong(int n)
{
    int temp = n;
    int digits = 0;
    int sum = 0;

    // Count number of digits
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to power of digits
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == n);
}
void functionFor19()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (is_Armstrong(n))
        cout << "Entered number is Armstrong";
    else
        cout << "Entered number is not Armstrong";
}

// 20. Sum of Digits of a Number
int sumOfDigit(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void functionOf20()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits of number: " << sumOfDigit(n);
}

// 21. Convert String to Uppercase
char *Capital(char name[])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = toupper(name[i]);
    }
    return name;
}
void functionOf21()
{
    char name[30];

    cout << "Enter string: ";
    cin.ignore();    
    cin.getline(name, 30);

    strcpy(name, Capital(name));

    cout << "ALL Capital: " << name;
}

// 22. Date Difference Between Two Dates
void date_diff_between_2_dates()
{
    int d1, m1, y1;
    int d2, m2, y2;

    cout << "Enter first date (dd mm yyyy): ";
    cin >> d1 >> m1 >> y1;

    cout << "Enter second date (dd mm yyyy): ";
    cin >> d2 >> m2 >> y2;

    tm date1 = {};
    tm date2 = {};

    // Assign first date
    date1.tm_mday = d1;
    date1.tm_mon = m1 - 1;     // months start from 0
    date1.tm_year = y1 - 1900; // years since 1900

    // Assign second date
    date2.tm_mday = d2;
    date2.tm_mon = m2 - 1;
    date2.tm_year = y2 - 1900;

    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);

    double diff_seconds = difftime(time2, time1);
    int diff_days = abs(diff_seconds / (60 * 60 * 24));

    cout << "\nDifference = " << diff_days << " days";

    cout << "\nApprox "
         << diff_days / 365 << " years & "
         << (diff_days % 365) / 30 << " months";
}

// 23. Make pyramid
void makePyramid()
{
    int n;
    cout << "\nEnter nth number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

// 24. Sort Name Strings (Ascending / Descending)
void sortNames(vector<string> &names, bool ascending = true)
{
    if (ascending)
    {
        sort(names.begin(), names.end());
    }
    else
    {
        sort(names.begin(), names.end(), greater<string>());
    }
}
void functionOf24()
{
    int n;
    cout << "Enter no. of names: ";
    cin >> n;
    cin.ignore(); // clear newline from buffer

    vector<string> names(n);

    cout << "Enter " << n << " names:\n";
    for (int i = 0; i < n; i++)
    {
        getline(cin, names[i]);
    }

    // Sort in ascending order
    sortNames(names, true);

    cout << "\nSorted Names:\n";
    for (const string &name : names)
    {
        cout << name << endl;
    }
}

// 25. Sort Numbers using Bubble Sort
void sortNums()
{

    vector<int> nums = {2, 3, 8, 9, 10, 1, 4, 5, 7, 6};

    cout << "Sorted numbers:\n";
    for (int num : nums)
    {
        cout << num << " ";
    }

    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

// 26. Display a 2D Matrix (3×3)
void array2d()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "\n2D array:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// 27. Sum of Two 3×3 Matrices
void matrix_addition()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int b[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}};

    int c[3][3];

    // Calculate sum of matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result matrix
    cout << "Sum of two matrices:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

// 28. Simple Inheritance (Teacher → Student)
// Base class
class Teacher
{
public:
    int t_id;
    char name[20];

    void getData()
    {
        cout << "Enter teacher id and name: ";
        cin >> t_id >> name;
    }

    void showData()
    {
        cout << "\nTeacher ID   : " << t_id;
        cout << "\nTeacher Name : " << name;
    }
};

// Derived class
class Student : public Teacher
{
private:
    int roll;

public:
    void getData()
    {
        Teacher::getData(); // call base class function
        cout << "\nEnter student roll no: ";
        cin >> roll;
    }

    void showData()
    {
        Teacher::showData(); // call base class function
        cout << "\nStudent Roll No: " << roll;
    }
};
void functionOf28()
{
    Student obj;

    obj.getData();
    obj.showData();
}

// 29. Multiple Inheritance
// First base class
class Device
{
protected:
    string deviceId;

public:
    void getDevice()
    {
        cout << "Enter Device ID: ";
        cin >> deviceId;
    }
};

// Second base class
class Network
{
protected:
    string ipAddress;

public:
    void getNetwork()
    {
        cout << "Enter IP Address: ";
        cin >> ipAddress;
    }
};

// Derived class (Multiple Inheritance)
class SmartSystem : public Device, public Network
{
public:
    void showDetails()
    {
        cout << "\nDevice ID  : " << deviceId;
        cout << "\nIP Address : " << ipAddress;
    }
};

void functionOf29()
{
    SmartSystem system;

    system.getDevice();
    system.getNetwork();
    system.showDetails();
}

// 30.Function to check Neon number
void checkNeon()
{
    int num;
    cout << "\nEnter number : ";
    cin >> num;

    int square = num * num;
    int sum = 0;

    while (square != 0)
    {
        sum += square % 10;
        square /= 10;
    }

    if (sum == num)
        cout << "Neon Number";
    else
        cout << "Not a Neon Number";
}

// 31. Traverse array
void traverseArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// 32. Insert into array (1-based position)
int insertIntoArray(int arr[], int size, int element, int position)
{
    if (position < 1 || position > size + 1)
    {
        cout << "Invalid position!" << endl;
        return size;
    }

    for (int i = size; i >= position; i--)
        arr[i] = arr[i - 1];

    arr[position - 1] = element;
    return size + 1;
}

// 33. Delete from array (1-based position)
int deleteFromArray(int arr[], int size, int position)
{
    if (position < 1 || position > size)
    {
        cout << "Invalid position!" << endl;
        return size;
    }

    for (int i = position - 1; i < size - 1; i++)
        arr[i] = arr[i + 1];

    return size - 1;
}

// 34. Linear Search
int linearSearch(int a[], int n, int item)
{
    for (int i = 0; i < n; i++)
        if (a[i] == item)
            return i;
    return -1;
}

// 35. Binary Search (array must be sorted)
int binarySearch(int a[], int n, int item)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == item)
            return mid;
        else if (item > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Menu-driven function
void functionOf31to35()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[100]; // fixed-size array (exam safe)
    cout << "\nEnter Array elements : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int choice, size = n;

    do
    {
        cout << "\nMENU\n";
        cout << "1. Traverse Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Linear Search\n";
        cout << "5. Binary Search\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            traverseArray(a, size);
            break;

        case 2:
        {
            int element, position;
            cout << "Enter element: ";
            cin >> element;
            cout << "Enter position (1-based): ";
            cin >> position;
            size = insertIntoArray(a, size, element, position);
            break;
        }

        case 3:
        {
            int position;
            cout << "Enter position (1-based): ";
            cin >> position;
            size = deleteFromArray(a, size, position);
            break;
        }

        case 4:
        {
            int item;
            cout << "Enter element to search: ";
            cin >> item;
            int res = linearSearch(a, size, item);
            if (res == -1)
                cout << "Element not found";
            else
                cout << "Element found at index " << res;
            break;
        }

        case 5:
        {
            int item;
            cout << "Enter element to search: ";
            cin >> item;
            int res = binarySearch(a, size, item);
            if (res == -1)
                cout << "Element not found";
            else
                cout << "Element found at index " << res;
            break;
        }

        case 6:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);
}

// Stack
// 36. Push into stack
void pushIntoStack(int &top, int &max, int stack[], int item)
{
    if (top == max - 1)
    {
        cout << "Stack is full";
    }
    else
    {
        top++;
        stack[top] = item;
    }
    return;
}

// 37. Pop From Stack
void popFromStack(int &top, int stack[])
{
    if (top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Popped element is: " << stack[top] << endl;
        top--;
    }
    return;
}

// 38. Traverse in Stack
void traverseInStack(int &top, int stack[])
{
    if (top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Stack elements are : ";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int functionFrom36to38()
{
    int max = 5;
    int stack[max];
    int top = -1;
    int choice, item;

    do
    {
        cout << "\n\nStack Operations:";
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
            pushIntoStack(top, max, stack, item);
            break;

        case 2:
            popFromStack(top, stack);
            break;

        case 3:
            traverseInStack(top, stack);
            break;

        case 4:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid choice!";
        }
    } while (choice != 4);
}

// QueueDS
//  39. Push Into QueueDS
#define max 5
class queueDS
{
    int top;
    int bottom;
    int queueDS2[max];

public:
    queueDS()
    {
        top = -1;
        bottom = -1;
    }
    void push();
    void pop();
    void traverse();
};

void queueDS ::push()
{
    if (top == max - 1)
    {
        cout << "\nQueueDS Overflow";
        return;
    }
    int item;
    cout << "\nEnter item which you want to insert : ";
    cin >> item;

    if (top == -1)
        bottom = 0;
    top++;
    queueDS2[top] = item;
}

// 40. Pop from QueueDS
void queueDS ::pop()
{
    if (top == -1 || bottom > top)
    {
        cout << "\nStack underflow";
        return;
    }

    int item = queueDS2[bottom];

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

// 41. Traversing in QueueDS
void queueDS ::traverse()
{
    if (top == -1)
    {
        cout << "QueueDS underflow";
        return;
    }

    cout << "\nQueueDS elements are : ";
    for (int i = bottom; i <= top; i++)
    {
        cout << " " << queueDS2[i];
    }
}

int functionsFrom39t041()
{
    queueDS q;
    int choice;
    do
    {
        cout << "\n\nQueueDS Operations Menu:";
        cout << "\n1. Push (EnqueueDS)";
        cout << "\n2. Pop (DequeueDS)";
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

// Linked linkedList
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

class linkedList
{
public:
    node *head;
    linkedList()
    {
        head = NULL;
    }

    // 42. Insertion in Linked linkedList
    void push_front(int data)
    {
        node *new_node = new node(data);

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }

    // 43. Deletion from Linked linkedList
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "\nLinked linkedList has no node";
            return;
        }

        node *item = head;
        head = head->next;
        item->next = NULL;

        cout << "\nPoped element is : " << item->data << endl;
        delete item;
    }

    // 44. Searching in Linked linkedList
    int searchWithPosition(int pos)
    {
        if (pos <= 0)
        {
            cout << "\nInvalid position";
            return -1;
        }

        node *temp = head;
        int count = 1;

        while (temp != NULL && count < pos)
        {
            temp = temp->next;
            count++;
        }

        if (temp == NULL)
        {
            cout << "\nPosition out of range";
            return -1;
        }

        return temp->data;
    }

    // 45. Traversing in Traverse
    void traverse()
    {
        node *temp = head;
        cout << "\nlinkedList elemenets are : ";
        while (temp != NULL)
        {
            cout << " " << temp->data;
            temp = temp->next;
        }
    }
};

void functionsOfLinkedList()
{
    linkedList ll;
    int choice, value, pos;

    do
    {
        cout << "\n\n--- LINKED linkedLIST MENU ---";
        cout << "\n1. Push Front";
        cout << "\n2. Pop Front";
        cout << "\n3. Traverse";
        cout << "\n4. Search by Position";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            ll.push_front(value);
            break;

        case 2:
            ll.pop_front();
            break;

        case 3:
            ll.traverse();
            break;

        case 4:
            cout << "Enter position (1-based): ";
            cin >> pos;
            value = ll.searchWithPosition(pos);
            if (value != -1)
                cout << "\nData at position " << pos << " is: " << value;
            break;

        case 5:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 5);
}

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

static int index = -1;

// 46. Tree Building
//  Build tree from preorder (-1 means NULL)
Node *buildTree(const vector<int> &preorder)
{
    index++;
    if (preorder[index] == -1)
        return NULL;

    Node *root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// 47. Traverse Tree in preOrder
void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        cout << "-1 ";
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
// 48. Traverse Tree in InOrder
void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        cout << "-1 ";
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// 49. Traverse Tree in PostOrder
void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        cout << "-1 ";
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}
// 50. Traverse Tree Level Wise
void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        cout << "-1 ";
        return;
    }

    cout << root->left->data << " ";
    cout << root->right->data << " ";

    levelOrderTraversal(root->left);
    levelOrderTraversal(root->right);
}

// 51. Graph
class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    // 52. Add Edges into Graph
    void addEdge(int a, int b)
    {
        l[a].push_back(b);
        l[b].push_back(a);
    }

    // 53. Print Edges and their connected graph
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " : ";
            for (int x : l[i])
                cout << x << " ";
            cout << endl;
        }
    }

    // 54. Traverse Graph BFS
    void bfs()
    {
        queue<int> Q;
        vector<int> vis(V, false);

        Q.push(0);
        vis[0] = true;

        cout << "\nBFS : ";

        while (Q.size() > 0)
        {
            int u = Q.front();
            Q.pop();
            cout << u << " ";

            for (int x : l[u])
            {
                if (!vis[x])
                {
                    vis[x] = true;
                    Q.push(x);
                }
            }
        }
    }
};

void functionsForGaph()
{
    int V;
    cout << "Enter number of vertices: ";
    cin >> V;

    Graph g(V);

    int choice;
    do
    {
        cout << "\n\n--- GRAPH MENU ---";
        cout << "\n1. Add Edge";
        cout << "\n2. Print Graph";
        cout << "\n3. BFS Traversal";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int u, v;
            cout << "Enter edge (u v): ";
            cin >> u >> v;
            g.addEdge(u, v);
            break;
        }

        case 2:
            g.printGraph();
            break;

        case 3:
            g.bfs();
            break;

        case 4:
            cout << "Exiting Graph Menu...";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 4);
}




//  operator overloading
class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    // 55. Pre-increment ++obj
    Number operator++() {
        ++value;
        return *this;
    }

    // 56.Post-increment obj++
    Number operator++(int) {
        Number temp = *this; // store old value
        value++;
        return temp;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int functionsOfOperatorOverloading() {
    int x;
    cout << "\nEnter a number : ";
    cin >> x;
    Number n(x);

    cout << "Initial ";
    n.display();

    cout << "\nAfter Pre-Increment (++n): ";
    ++n;
    n.display();

    cout << "\nAfter Post-Increment (n++): ";
    n++;
    n.display();

    return 0;
}



class Shape {
public:
    virtual void draw() = 0;   // pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int functionOfPureVirtual() {
    Shape* s;
    Circle c;

    s = &c;
    s->draw();   // calls Circle's draw()

    return 0;
}



class BaseforVirtual {
public:
    virtual void show() {   // virtual function
        cout << "This is Base class show()" << endl;
    }
};

class DerivedforVirtual : public BaseforVirtual {
public:
    void show() {   // overriding
        cout << "This is Derived class show()" << endl;
    }
};

int functionOfVirtual() {
    BaseforVirtual* b;
    DerivedforVirtual d;

    b = &d;      // base class pointer → derived object
    b->show();   // calls Derived version (runtime binding)

    return 0;
}
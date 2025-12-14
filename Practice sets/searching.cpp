#include<iostream>
using namespace std;

// Linear search
int linearSearch(int a[], int n, int item){
    for(int i=0; i<n; i++)
        if(a[i] == item)
            return i;
    return -1;
}

// Binary search
int binarySearch(int a[], int n, int item){
    int min = 0;
    int max = n-1;

    while (min <= max)
    {
        cout << "\nfor finding mid : " << min << " " << max;
        int mid = min + (max - min) / 2;

        if( a[mid] == item )
            return mid;
        else if( item > a[mid])
            min = mid+1;
        else{
            max = mid -1;
        }

    }
    return -1;
    
}

int main() {
    int size;
    cout << "\nEnter the size for array : ";
    cin >> size;

    int *arr = new int[size];

    cout << "\nEnter Array elements : ";
    for(int i=0; i<size; i++)
        cin >> arr[i];
    
    cout << "\nArray elements : ";
    for(int i=0; i<size; i++)
        cout << " " << arr[i];

    int item;
    cout << "\nEnter item which you want to find : ";
    cin >> item;

    int pos = binarySearch(arr, size, item);

    cout << "\nItem found at : " << pos;

}
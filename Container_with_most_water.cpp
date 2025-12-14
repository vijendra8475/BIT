#include<iostream>
#include<vector>
using namespace std;
int getMostWaterContained(vector<int> &a) {
    int waterContained = 0;
    int n = a.size();

    // Brute force
    // for(int i=0; i<n; i++) {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         waterContained = max(waterContained, ((j-i) * min(a[i], a[j])));
    //     }
    // }

    // using 2 pointer approach
    // int st = 0;
    // int end = n-1;
    // while (st<end)
    // {
    //     int height = min(a[st], a[end]);
    //     int diff = end-st;
    //     int currentWaterContained = diff * height;
    //     waterContained = max(waterContained, currentWaterContained);
    //     if(a[st] < a[end])
    //         st++;
    //     else
    //         end--;
    // }    

    return waterContained;
}

int main() {
    vector<int> a = {1,8,6,2,5,4,8,3,7};
    int mostWaterContained = getMostWaterContained(a);
    cout << mostWaterContained;
}
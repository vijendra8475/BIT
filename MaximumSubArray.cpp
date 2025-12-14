#include<iostream>
#include<vector>
using namespace std;

int bruteForce(vector <int> &a) {
    int res = 0, n = a.size();
    for(int i=0; i<n; i++) {
        int temp = 0;
        for(int j=i; j<n; j++){
            temp += a[j];
            res = max(res, temp);
        }
    }
    return res;
}

int optimumApproach(vector<int> &a) {
    int res = 0, temp = 0;
    int n = a.size();
    for(int i=0; i<n; i++) {
        temp += a[i];
        res = max(res,temp);
    }
    return res;
}

int kadansAlgo(vector<int> &a) {
    int res = 0;
    int temp = 0;
    int n = a.size();
    for(int i=0; i<n; i++) {
        temp +=a[i];
        if(temp < 1){
            temp = 0;
        }
        res = max(res, temp);
    }
    return res;
}

int main() {
    vector<int> arr = {1,-2,-4-1,2,4,-2,-8,7,8,5};
    int getMaximumSubArray = optimumApproach(arr);
    cout << getMaximumSubArray;
}
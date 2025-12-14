#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement_BruteForce(vector<int> &a)
{
    int n = a.size();
    int m = n / 2;
    for (int i : a)
    {
        int freq = 0;
        for (int j : a)
        {
            if (i == j)
            {
                freq++;
            }
            if (freq > m)
            {
                return i;
            }
        }
    }
}

int majorityElement_OptimumApproach(vector<int> &a)
{
    int n = a.size();
    int m = n / 2;
    int temp = a[0];
    int frq = 1;
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
    {
        if (temp == a[i])
        {
            frq++;
            if (frq > m)
                return a[i];
        }
        else
        {
            temp = a[i];
            frq = 1;
        }
    }
    return -1;
}

int mooresVotinf(vector<int>&a) {
    int n = a.size();
    int m = n/2;
    int freq = 0;
    int ans = a[0];
    for(int i=0; i<n; i++) {
        if(a[i] == ans) {
            freq++;
        }
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 2, 1, 2, 2, 2};
    int ans = majorityElement_OptimumApproach(a);
    cout << ans;
}
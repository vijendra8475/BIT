#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum_BruteForce(vector<int> &a, int target)
{
    for (int z : a)
    {
        for (int j : a)
        {
            if ((z + j) == target)
            {
                vector<int> ans = {z, j};
                return ans;
            }
        }
    }
}

vector<int> pairSum_OptimumWay(vector<int> &a, int target)
{
    int n = a.size();
    int st = 0;
    int end = n-1;

    while (st < end)
    {
        if (a[st] + a[end] == target)
        {
            vector<int> ans = {st, end};
            return ans;
        }
        else if ((a[st] + a[end]) < target)
        {
            st++;
        }
        else
        {
            end--;
        }
        cout << "st : " << st << " end : " << end << endl;
    }
}

int main()
{
    vector<int> a = {1, 4, 6, 9, 10};
    vector<int> ans = pairSum_OptimumWay(a, 16);

    for (int a : ans)
    {
        cout << a << " ";
    }
}
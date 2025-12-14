#include <iostream>
#include <vector>
using namespace std;

int getMaxProfit(vector<int> a)
{
    int n = a.size();
    int profit = 0;
    int buy = a[0];

    for (int i = 1; i < n; i++)
    {
        buy = min(buy, a[i]);
        profit = max(profit, a[i] - buy);
    }
    return profit;
}

int main()
{
    vector<int> a = {7, 1, 5, 3, 6, 4};
    int maxProfit = getMaxProfit(a);
    cout << "\nOur Maximum profit this week : " << maxProfit;
}
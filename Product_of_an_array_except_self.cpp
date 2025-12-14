#include <iostream>
#include <vector>
using namespace std;
/*vector<int> productExceptSelf(vector<int> &a)
{
    int n = a.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
                prod *= a[j];
        }
        ans.push_back(prod);
    }
    return ans;
}
*/

vector<int> productExceptSelf(vector<int> &a)
{
    int n = a.size();
    // vector<int> ans;

    vector<int> ans(n, 1);

    for (int i = 1; i < n; i++)
    {
        ans[i] = a[i - 1] * ans[i - 1];
    }

    int temp = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        temp = temp * a[i+1];
        ans[i] *= temp;
    }


    return ans;
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(a);
    cout << endl
         << endl;
    for (int x : ans)
    {
        cout << x << "   ";
    }
}
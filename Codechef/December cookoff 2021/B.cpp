#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <queue>
#include <stack>

using namespace std;
/*
void rec(int i, int n, vector<int> a, vector<int> b, vector<int> arr)
{
    if (i == n)
    {
        if (a.size() && b.size())
        {
            for (int j = 0; j < a.size(); j++)
            {
                cout << a[j] << " ";
            }
            cout << "\n";
            for (int j = 0; j < b.size(); j++)
            {
                cout << b[j] << " ";
            }
            int x, y;
            if (a.size() % 2)
            {
                x = a[a.size() / 2];
            }
            else
            {
                x = a[(a.size() / 2) - 1];
            }
            if (b.size() % 2)
            {
                y = b[b.size() / 2];
            }
            else
            {
                y = b[(b.size() / 2) - 1];
            }
            cout << "\n"
                 << abs(x - y) << "\n"
                 << "------------------------------\n";
        }
        return;
    }
    a.push_back(arr[i]);
    rec(i + 1, n, a, b, arr);
    a.resize(a.size() - 1);
    b.push_back(arr[i]);
    rec(i + 1, n, a, b, arr);
    b.resize(b.size() - 1);
    return;
}*/

void solve(int T)
{
    int n;
    cin >> n;
    vector<int> arr(n), a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << arr[n / 2] - arr[(n / 2) - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}
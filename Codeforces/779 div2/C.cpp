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
#include <climits>

using namespace std;

int n, m, k, i, j;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    int one = 0, nen = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            one++;
        }
        if (arr[i] == n)
        {
            nen++;
        }
    }
    if (one > 1 || nen > 1)
    {
        cout << "NO";
        return;
    }
    if (nen)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] == n && arr[i] == 1)
            {
                continue;
            }
            if (arr[i] != arr[i - 1] + 1)
            {
                cout << "NO";
                return;
            }
        }
        cout << "YES";
        return;
    }
    set<int> s;
    s.insert(arr[0]);
    s.insert(0);
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == 1 && arr[i] != 2)
        {
            cout << "NO";
            return;
        }
        if (arr[i] > arr[i - 1] + 1)
        {
            cout << "NO";
            return;
        }
        if (arr[i] < arr[i - 1] && s.find(arr[i] - 1) == s.end())
        {
            cout << "NO";
            return;
        }
        s.insert(arr[i]);
    }
    cout << "YES";
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
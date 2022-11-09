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
    vector<int> arr(n), ans;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if ((n - i) % 2 == 0 && i < n - 1)
        {
            ans.push_back(min(arr[i], arr[i + 1]));
            ans.push_back(max(arr[i], arr[i + 1]));
            i++;
        }
        else
        {
            ans.push_back(arr[i]);
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (ans[i] > ans[i + 1])
        {
            cout << "NO";
            return;
        }
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
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <numeric>

using namespace std;

int LongestIncreasingSubsequenceLength(vector<int> &v)
{
    if (v.size() == 0)
        return 0;

    vector<int> tail(v.size(), 0);
    int length = 1;

    tail[0] = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = upper_bound(b, e, v[i]);
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }

    return length;
}

void solve(int T)
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n), brr(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    cout << LongestIncreasingSubsequenceLength(arr) + LongestIncreasingSubsequenceLength(brr);
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
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <climits>
#include <numeric>

using namespace std;

int n, m, i, j;
void solve(int T)
{
    cin >> n;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long left = arr[0] + arr[1], right = arr[n - 1];
    if (right > left)
    {
        cout << "YES";
        return;
    }
    for (i = 2, j = n - 2; i < j; i++, j--)
    {
        left += arr[i];
        right += arr[j];
        if (right > left)
        {
            cout << "YES";
            return;
        }
    }
    if (i == j)
    {
        left += arr[i];
    }
    if (right > left)
    {
        cout << "YES";
        return;
    }
    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}
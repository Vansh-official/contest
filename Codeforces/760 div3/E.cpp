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

void solve(int T)
{
    int n;
    cin >> n;
    vector<long long> arr(n), brr(n);
    long long s = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
        x += brr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i % n] = brr[i % n] - brr[i - 1];
        arr[i % n] = -arr[i % n];
    }
    s = (2 * x) / (n * (n + 1));
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] + s) <= 0 || (arr[i] + s) % n)
        {
            cout << "NO";
            return;
        }
        arr[i] = arr[i] + s;
        arr[i] /= n;
        if (arr[i] <= 0)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
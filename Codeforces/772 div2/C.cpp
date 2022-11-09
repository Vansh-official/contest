#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
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
    if (arr[n - 2] > arr[n - 1])
    {
        cout << -1;
        return;
    }
    int l = n - 2, r = n - 1;
    vector<int> p;
    for (i = n - 3; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1] && arr[l] - arr[r] > arr[i + 1])
        {
            cout << -1;
            return;
        }
        else if (arr[i] > arr[i + 1])
        {
            p.push_back(i + 1);
            arr[i] = arr[l] - arr[r];
        }
        l--;
    }
    cout << p.size();
    for (i = 0; i < p.size(); i++)
    {
        cout << "\n"
             << p[i] << " " << p[i] + 1 << " " << n;
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
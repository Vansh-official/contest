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

void solve(int T)
{
    int n, i;
    cin >> n;
    int x = pow(2, 17);
    vector<int> a, b;
    for (i = 1; i <= n; i++)
    {
        if (i == n - 1 && n == pow(2, 17))
            break;
        a.push_back(i);
        b.push_back(i + x);
    }
    if (i == n - 1 && n == pow(2, 17))
    {
        a.push_back(pow(2, 18));
        a.push_back(pow(2, 18) + 1);
        b.push_back(pow(2, 18) + 2);
        b.push_back(pow(2, 18) + 3);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
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
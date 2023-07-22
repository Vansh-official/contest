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

int n, m, i, j, k;
string s;

long long M = 1000000007;

void solve(int T)
{
    cin >> n >> s;
    if (n % 2)
    {
        cout << -1;
        return;
    }
    bool f = 1;
    int count = 0;
    for (i = 0; i < n; i++)
        if (s[i] == '{')
            count++;
        else if (count)
            count--;
        else
        {
            f = 0;
            break;
        }
    if (f && !count)
    {
        cout << 1 << "\n";
        for (i = 0; i < n; i++)
            cout << 1 << " ";
        return;
    }
    count = 0;
    f = 1;
    for (i = n - 1; i >= 0; i--)
        if (s[i] == '(')
            count++;
        else if (count)
            count--;
        else
        {
            f = 0;
            break;
        }
    if (f && !count)
    {
        cout << 1 << "\n";
        for (i = 0; i < n; i++)
            cout << 1 << " ";
        return;
    }
    vector<int> mask(n, 1);
    count = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == ')' && count == 0)
            mask[i] = 2;
        else if (s[i] == ')')
            count--;
        else if (s[i] == '(')
            count++;
    }
    i = n - 1;
    while (i >= 0 && count)
    {
        if (s[i] == '(')
        {
            mask[i] = 2;
            count--;
        }
        i--;
    }
    count = 0;
    for (i = n - 1; i >= 0; i--)
        if (mask[i] == 1)
            continue;
        else if (s[i] == ')' && count == 0)
        {
            cout << -1;
            return;
        }
        else if (s[i] == ')')
            count--;
        else
            count++;
    if (count)
    {
        cout << -1;
        return;
    }
    set<int> x;
    for (i = 0; i < n; i++)
        x.insert(mask[i]);
    if (x.size() == 1)
    {
        cout << 1 << "\n";
        for (i = 0; i < n; i++)
            cout << 1 << " ";
    }
    else
    {
        cout << 2 << "\n";
        for (i = 0; i < n; i++)
            cout << mask[i] << " ";
    }
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

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
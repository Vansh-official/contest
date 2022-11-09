#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count[31];
    for (int i = 0; i < 31; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((1 << i) & arr[j]) != 0)
            {
                count[i]++;
            }
        }
    }
    int x = gcd(count[0], count[1]);
    for (int i = 2; i < 31; i++)
    {
        x = gcd(x, count[i]);
    }
    if (x == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        return;
    }
    set<int> ans;
    sort(count, count + 31);
    int y = count[30] / x;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i)
        {
            continue;
        }
        bool a = 1, b = 1;
        for (int j = 0; j < 31; j++)
        {
            if (count[j] % i)
            {
                a = 0;
            }
            if (count[j] % (x / i))
            {
                b = 0;
            }
        }
        if (a)
        {
            ans.insert(i);
        }
        if (b)
        {
            ans.insert(x / i);
        }
    }
    for (int i = 1; i * i <= y; i++)
    {
        if (y % i)
        {
            continue;
        }
        bool a = 1, b = 1;
        for (int j = 0; j < 31; j++)
        {
            if (count[j] % i)
            {
                a = 0;
            }
            if (count[j] % (y / i))
            {
                b = 0;
            }
        }
        if (a)
        {
            ans.insert(i);
        }
        if (b)
        {
            ans.insert(y / i);
        }
    }
    for (auto itr = ans.begin(); itr != ans.end(); ++itr)
    {
        cout << *itr << " ";
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
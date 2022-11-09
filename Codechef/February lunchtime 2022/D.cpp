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
    set<int> s, b;
    bool ans = 1;
    for (i = 0; i < n; i++)
    {
        cin >> m;
        if (s.find(m) != s.end())
        {
            ans = 0;
        }
        s.insert(m);
    }
    if (!ans)
    {
        cout << "NO";
        return;
    }
    auto itr = s.begin();
    i = 1;
    while (itr != s.end() && *itr <= n)
    {
        while (*itr != i)
        {
            b.insert(i++);
        }
        itr++;
        i++;
    }
    if (itr == s.end())
    {
        cout << "YES " << n + 1;
        return;
    }
    while (i <= n)
    {
        b.insert(i++);
    }
    int x = n + 1, y = *itr - *b.begin();
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
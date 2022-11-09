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
    int n, k;
    long long x;
    string s;
    cin >> n >> k >> x >> s;
    x--;
    long long cur = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (x == 0)
        {
            break;
        }
        if (s[i] == 'a')
        {
            continue;
        }
        long long c = 1;
        while (i > 0 && s[i - 1] == '*')
        {
            i--;
            c++;
        }
        c *= (long long)k;
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
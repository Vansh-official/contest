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

void solve(int T)
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    if ((count % k) % 2)
    {
        cout << "NO";
    }
    else
    {
        int x = count / k, y = count % k, cur = 0, cursum = 0, l = 0, r = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                cursum++;
            }
            if (cursum == x + y)
            {
                i++;
                cur++;
                break;
            }
            i++;
        }
        cursum = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                cursum++;
            }
            if (cursum == x)
            {
                cur++;
                cursum = 0;
            }
            i++;
        }
        if (cur >= k)
        {
            l = 1;
        }
        i = n - 1;
        cursum = cur = 0;
        while (i >= 0)
        {
            if (s[i] == '1')
            {
                cursum++;
            }
            if (cursum == x + y)
            {
                i--;
                cur++;
                break;
            }
            i--;
        }
        cursum = 0;
        while (i >= 0)
        {
            if (s[i] == '1')
            {
                cursum++;
            }
            if (cursum == x)
            {
                cur++;
                cursum = 0;
            }
            i--;
        }
        if (cur >= k)
        {
            r = 1;
        }
        if (l || r)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
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
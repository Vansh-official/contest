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
    int n;
    string s;
    cin >> n >> s;
    if (n % 2)
    {
        cout << "NO";
        return;
    }
    int count = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    if (count == n / 2)
    {
        cout << "YES\n"
             << 1 << " " << n;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cur++;
        }
        if (count - cur + i + 1 - cur == n / 2)
        {
            cout << "YES\n"
                 << 1 << " " << i + 1;
            return;
        }
    }
    cout << "NO";
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
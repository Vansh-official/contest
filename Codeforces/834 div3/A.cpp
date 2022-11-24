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

int n, m, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> s;
    n = s.length();
    vector<char> a(3);
    a[0] = 'Y';
    a[1] = 'e';
    a[2] = 's';
    if (s[0] == 'Y')
        i = 0;
    else if (s[0] == 'e')
        i = 1;
    else if (s[0] == 's')
        i = 2;
    else
    {
        cout << "NO";
        return;
    }
    for (j = 1; j < n; j++)
    {
        i++;
        i %= 3;
        if (s[j] != a[i])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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
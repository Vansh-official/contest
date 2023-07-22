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
    cin >> s;
    n = s.length();
    j = 0;
    while (j < n && s[j] == '?')
        j++;
    char ch;
    if (j == n)
        ch = '0';
    else
        ch = s[j];
    for (i = 0; i < j; i++)
        s[i] = ch;
    j = n - 1;
    while (j >= 0 && s[j] == '?')
        j--;
    if (j == -1)
        ch = '0';
    else
        ch = s[j];
    for (i = n - 1; i > j; i--)
        s[i] = ch;
    for (i = 0; i < n; i++)
    {
        if (s[i] != '?')
            continue;
        ch = s[i - 1];
        while (i < n && s[i] == '?')
            s[i++] = ch;
    }
    cout << s;
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
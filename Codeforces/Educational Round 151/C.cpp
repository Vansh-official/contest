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
    string a, b;
    cin >> s >> m >> a >> b;
    n = s.length();
    int last = n - 1;
    for (i = m - 1; i >= 0; i--)
    {
        map<char, int> pos;
        for (char ch = '0'; ch <= '9'; ch++)
            pos[ch] = -1;
        for (j = i; j <= last; j++)
            pos[s[j]] = j;
        for (char ch = a[i]; ch <= b[i]; ch++)
            last = min(last, pos[ch]);
        if (last < 0)
        {
            cout << "YES";
            break;
        }
        last--;
    }
    cout << "NO";
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
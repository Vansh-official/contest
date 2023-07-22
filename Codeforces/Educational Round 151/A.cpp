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
    int x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES\n"
             << n << "\n";
        for (i = 1; i <= n; i++)
            cout << 1 << " ";
        return;
    }
    if (k >= n && x != n)
    {
        cout << "YES\n1\n"
             << n;
        return;
    }
    if (n == 1 || k == 1)
        cout << "NO";
    else if (k == 2 && n % 2)
        cout << "NO";
    else
    {
        vector<int> ans;
        while (n > 3)
        {
            n -= 2;
            ans.push_back(2);
        }
        ans.push_back(n);
        cout << "YES\n"
             << ans.size() << "\n";
        for (i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
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
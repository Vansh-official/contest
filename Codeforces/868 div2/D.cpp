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
#include <sstream>
#include <tuple>
#include <iomanip>

using namespace std;

int n, m, i, j, k;
string s;
long long M = 1000000007;

void solve(int T)
{
    cin >> n >> k;
    vector<pair<long long, long long>> a(k);
    for (i = 0; i < k; i++)
        cin >> a[i].first;
    for (i = 0; i < k; i++)
        cin >> a[i].second;
    string ans = "abc";
    char ch = 'd';
    i = 0;
    if (a[i].first == 3)
    {
        if (a[i].second > 3)
        {
            cout << "NO";
            return;
        }
        i++;
    }
    long long count = 3;
    j = 0;
    while (i < k)
    {
        while (ans.length() < a[i].first && count < a[i].second)
        {
            ans += ch;
            count++;
        }
        if (count < a[i].second)
        {
            cout << "NO";
            return;
        }
        while (ans.length() < a[i].first)
        {
            m++;
            ans += ('a' + j);
            j = (j + 1) % 3;
        }
        i++;
        ch++;
    }
    cout << "YES\n"
         << ans;
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
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}
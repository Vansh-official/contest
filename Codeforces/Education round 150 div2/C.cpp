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
    cin >> s;
    n = s.length();
    vector<bool> a(n, 1);
    map<char, long long> val, count, temp;
    for (i = 0, j = 1; i < 5; i++, j *= 10)
        val.insert({'A' + i, j});
    long long ans = 0;
    for (i = 0; i < n; i++)
        count[s[i]]++;
    long long yet = 0, y;
    for (i = n - 1; i >= 0; i--)
    {
        count[s[i]]--;
        int mt = -1;
        for (j = 4; j >= 0; j--)
            if (temp['A' + j])
            {
                mt = j;
                break;
            }
        for (j = 0; j < 5; j++)
        {
            y = yet;
            for (k = 0; k < 5; k++)
                if (k < max(mt, j))
                    y -= count['A' + k] * val['A' + k];
                else
                    y += count['A' + k] * val['A' + k];
            bool f = 1;
            for (k = j + 1; k < 5; k++)
                if (temp['A' + k])
                    f = 0;
            if (f)
                y += val['A' + j];
            else
                y -= val['A' + j];
            ans = max(ans, y);
        }
        yet += val[s[i]];
        for (j = 0; j < 5; j++)
            if ('A' + j > s[i] && temp['A' + j])
            {
                yet -= 2 * val[s[i]];
                break;
            }
        temp[s[i]]++;
    }
    cout << ans;
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
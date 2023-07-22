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

void in(vector<long long> &a, int N)
{
    for (int x = 0; x < N; x++)
        cin >> a[i];
    return;
}

bool comp(vector<long long> &a, vector<long long> &b)
{
    if (a[0] > b[0])
        return 1;
    if (a[0] == b[0] && a[1] < b[1])
        return 1;
    if (a[0] == b[0] && a[1] == b[1] && a[2] < b[2])
        return 1;
    return 0;
}

void solve(int T)
{
    long long h;
    cin >> n >> m >> h;
    vector<vector<long long>> a(n, vector<long long>(m));
    vector<vector<long long>> points(n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cin >> a[i][j];
        sort(a[i].begin(), a[i].end());
        long long cur = 0;
        points[i] = {0, 0, i};
        for (j = 0; j < m; j++)
            if (a[i][j] + cur <= h)
            {
                cur += a[i][j];
                points[i][0]++;
                points[i][1] += cur;
            }
            else
                break;
    }
    sort(points.begin(), points.end(), comp);
    for (i = 0; i < n; i++)
        // cout << points[i][0] << " " << points[i][1] << " " << points[i][2] << "\n";
        if (!points[i][2])
        {
            cout << i + 1;
            return;
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
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}
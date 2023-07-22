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

int n, m, i, j, k, q;
string s, p;
long long M = 1000000007;

bool solve(int T)
{
    bool flag = 0;
    vector<string> arr(2);
    cin >> arr[0] >> arr[1];
    n = arr[0].length();
    int same = 0;
    for (i = 0; i < n; i++)
        if (arr[0][i] == arr[1][i])
            same++;
    cin >> m >> q;
    map<int, int> blocked;
    int curl = n;
    for (i = 1; i <= q; i++)
    {
        if (blocked[i])
        {
            int x = blocked[i];
            curl++;
            if (arr[0][x - 1] == arr[1][x - 1])
                same++;
        }
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            blocked[i + m] = x;
            curl--;
            if (arr[0][x - 1] == arr[1][x - 1])
                same--;
        }
        else if (type == 2)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            if (a == c && b == d)
                continue;
            if (b == d)
            {
                swap(arr[a - 1][b - 1], arr[c - 1][d - 1]);
                continue;
            }
            if (arr[0][b - 1] == arr[1][b - 1])
                same--;
            if (arr[0][d - 1] == arr[1][d - 1])
                same--;
            swap(arr[a - 1][b - 1], arr[c - 1][d - 1]);

            if (arr[0][b - 1] == arr[1][b - 1])
                same++;
            if (arr[0][d - 1] == arr[1][d - 1])
                same++;
        }
        else
        {
            if (same == curl)
                cout << "YES\n";
            else
                cout << "NO\n";
            flag = 1;
        }
    }
    return flag;
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
        if (!solve(q))
            cout << "\n";
    }
}
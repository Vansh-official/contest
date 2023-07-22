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
    cin >> n;
    map<int, int> a;
    for (i = 0; i < n; i++)
    {
        cin >> m;
        a[m]++;
    }
    auto itr = a.begin();
    if (itr->first != 0)
    {
        cout << "NO";
        return;
    }
    auto btr = itr;
    btr++;
    while (btr != a.end())
    {
        if (btr->first != itr->first + 1 || btr->second > itr->second)
        {
            cout << "NO";
            return;
        }
        itr++;
        btr++;
    }
    cout << "YES";
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
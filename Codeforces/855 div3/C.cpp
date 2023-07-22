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

int n, m, i, j;
string s;
long long modu = 100000000;

void solve(int T)
{
    cin >> n;
    vector<long long> a(n);
    priority_queue<long long> pq;
    for (i = 0; i < n; i++)
        cin >> a[i];
    long long ans = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i])
            pq.push(a[i]);
        else
        {
            if (pq.size())
            {
                ans += pq.top();
                pq.pop();
            }
        }
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
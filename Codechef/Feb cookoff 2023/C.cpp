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

using namespace std;

int n, m, i, j;
string s;

void solve(int T)
{
    cin >> n;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (n == 1 || a[n - 1] > a[n - 2])
    {
        cout << "Marichka";
        return;
    }
    int count = 0;
    i = n - 1;
    while (i >= 0 && a[i] == a[n - 1])
    {
        i--;
        count++;
    }
    if (count % 2)
        cout << "Marichka";
    else
        cout << "Zenyk";
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
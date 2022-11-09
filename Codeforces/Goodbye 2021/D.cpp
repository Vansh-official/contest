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
#include <tuple>
#include <stack>
#include <climits>

using namespace std;

void solve(int T)
{
    int n;
    long long x, y = 0;
    cin >> n;
    vector<long long> arr(n), sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        y += arr[i];
        sum[i] = y;
    }
    cin >> x;
}

int main()
{
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
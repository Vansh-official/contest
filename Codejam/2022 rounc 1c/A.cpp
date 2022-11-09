#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <climits>
#include <queue>

using namespace std;

int n, m, i, j;

void printans(int t, int ans)
{
    cout << "Case #" << t << ": " << ans << endl;
}

void solve(int T)
{
    cin >> n;
    vector<string> arr(n);
    vector<int> count(26, 0);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
        for (j = 0; j < arr[i].size(); j++)
            count[arr[i][j] - 'a']++;
    string ans = arr[0];
    int taken = 1;
    while (taken < n)
    {
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int p = 1; p <= t; p++)
    {
        solve(p);
    }
}

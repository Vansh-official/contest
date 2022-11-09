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

int n, m, k, i, j;

void solve(int T)
{
    string s;
    cin >> s;
    n = s.length();
    vector<int> arr(26, 0);
    for (i = 0; i < n; i++)
        arr[s[i] - 'a']++;
    sort(arr.begin(), arr.end());
    if (arr[25] - arr[0] > 1)
    {
        cout << "NO";
        return;
    }
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
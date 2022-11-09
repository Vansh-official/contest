#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

int n, m, i, j;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    set<int> s;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(i + 1);
    }
    s.insert(n + 1);
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        s.erase(arr[i]);
        auto itr = s.begin();
        j = *itr;
        if (j == i + 2)
        {
            ans++;
        }
    }
    cout << ans;
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
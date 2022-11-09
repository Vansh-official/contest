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
    cin >> n >> m;
    vector<int> arr(m), ans;
    for (i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    j = 1;
    for (i = 0; i < m; i++)
    {
        int x = arr[i];
        while (x >= j)
        {
            ans.push_back(x--);
        }
        j = arr[i] + 1;
    }
    for (i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
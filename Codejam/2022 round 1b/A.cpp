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
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    i = 0;
    j = n - 1;
    int ans = 0, last = -1;
    while (i <= j)
    {
        if (arr[i] < arr[j])
        {
            if (arr[i] >= last)
            {
                ans++;
                last = arr[i];
            }
            i++;
        }
        else
        {
            if (arr[j] >= last)
            {
                ans++;
                last = arr[j];
            }
            j--;
        }
    }
    printans(T, ans);
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

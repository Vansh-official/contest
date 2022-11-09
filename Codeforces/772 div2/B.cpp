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

int n, m, i, j, temp;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            ans++;
            if (i < n - 3 && arr[i + 2] > arr[i + 1] && arr[i + 2] > arr[i + 3])
            {
                arr[i + 1] = max(arr[i], arr[i + 2]);
            }
            else
            {
                arr[i] = max(arr[i + 1], arr[i - 1]);
            }
        }
    }
    cout << ans << "\n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
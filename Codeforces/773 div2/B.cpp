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

void solve(int T)
{
    int n, i;
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int powerup = 0;
    for (i = 0; i < n; i++)
    {
        while (i < n - 1 && arr[i + 1] == arr[i])
        {
            i++;
        }
        powerup++;
    }
    for (i = 1; i <= min(powerup, n); i++)
    {
        cout << powerup << " ";
    }
    while (i <= n)
    {
        cout << ++powerup << " ";
        i++;
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
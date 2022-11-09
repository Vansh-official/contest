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
    cin >> n;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long max_ending_here = arr[0], min_ending_here = arr[0], max_so_far = arr[0];
    int ind_so_far = 0;
    for (int i = 1; i < n; i++)
    {
        long long temp = max({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
        min_ending_here = min({arr[i], arr[i] * max_ending_here, arr[i] * min_ending_here});
        max_ending_here = temp;
        if (max_ending_here > max_so_far)
        {
            ind_so_far = i;
            max_so_far = max_ending_here;
        }
    }
    long long ans = max((long long)1, max_so_far);
    if (ans == 1)
    {
        cout << n << " " << 0;
    }
    else
    {
        int r = n - ind_so_far - 1, l = ind_so_far;
        long long pro = arr[l--];
        int taken = 1;
        while (l >= 0 && pro != ans)
        {
            pro *= arr[l--];
            taken++;
        }
        cout << ind_so_far + 1 - taken << " " << r;
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

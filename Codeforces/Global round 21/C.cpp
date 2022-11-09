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

int n, k, i, j, x;

void solve(int T)
{
    long long m;
    cin >> n >> m;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;
    vector<long long> brr(k);
    for (i = 0; i < k; i++)
        cin >> brr[i];
    vector<pair<long long, long long>> count;
    for (i = 0; i < n; i++)
    {
        long long cur = arr[i], c = 1;
        while (cur % m == 0)
            cur /= m;
        if (arr[i] != cur)
            c = arr[i] / cur;
        if (count.size() && count[count.size() - 1].first == cur)
            count[count.size() - 1].second += c;
        else
            count.push_back({cur, c});
    }
    for (i = 0, j = 0; i < k && j < count.size(); i++)
    {
        if (brr[i] % count[j].first == 0 && brr[i] / count[j].first <= count[j].second)
        {
            long long z = brr[i] / count[j].first;
            while (z % m == 0)
                z /= m;
            if (z == 1)
            {
                count[j].second -= brr[i] / count[j].first;
                if (count[j].second == 0)
                    j++;
            }
            else
            {
                cout << "No";
                return;
            }
        }
        else
        {
            cout << "No";
            return;
        }
    }
    if (i == k && j == count.size())
        cout << "Yes";
    else
        cout << "No";
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
        cout << "\n";
    }
}
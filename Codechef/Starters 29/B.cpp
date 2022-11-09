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
#include <climits>

using namespace std;

int n, m, i, j;
void solve(int T)
{
    cin >> n;
    long long x, sum = 0;
    vector<long long> odd, even;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        x = abs(x);
        if (i % 2 == 0)
        {
            odd.push_back(x);
            sum += x;
        }
        else
        {
            even.push_back(x);
            sum -= x;
        }
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    if (even[even.size() - 1] - odd[0] > even[0] - odd[odd.size() - 1])
    {
        swap(even[even.size() - 1], odd[0]);
    }
    else
    {
        swap(even[0], odd[odd.size() - 1]);
    }
    x = 0;
    for (i = 0; i < odd.size(); i++)
    {
        x += odd[i];
    }
    for (i = 0; i < even.size(); i++)
    {
        x -= even[i];
    }
    cout << max(sum, x);
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
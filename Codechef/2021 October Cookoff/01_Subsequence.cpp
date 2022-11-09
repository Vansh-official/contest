#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<long long> arr, brr;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (i % 2 == 0)
        {
            arr.push_back(x);
        }
        else
        {
            brr.push_back(x);
        }
    }
    sort(arr.begin(), arr.end(), greater<long long>());
    sort(brr.begin(), brr.end());
    for (int i = 0, j = 0, count = 0; count < n; count++)
    {
        if (count % 2 == 0)
        {
            cout << arr[i++] << " ";
        }
        else
        {
            cout << brr[j++] << " ";
        }
    }
    long long ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < brr.size(); j++)
        {
            ans += (arr[i] * brr[j]);
        }
    }
    cout << "\n"
         << ans;
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
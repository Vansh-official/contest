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

int n, m, p, i, j;

void solve(int T)
{
    string s;
    cin >> n >> s;
    int ans = 0;
    vector<int> arr;
    for (i = 0; i < n; i++)
    {
        j = 1;
        while (i < n - 1 && s[i] == s[i + 1])
        {
            j++;
            i++;
        }
        arr.push_back(j);
    }
    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2)
        {
            ans++;
            if (arr[i] > 1)
            {
                arr[i]++;
                arr[i + 1]--;
            }
            else
            {
                arr[i]--;
            }
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
        solve(i);
        cout << "\n";
    }
}
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
    string s;
    cin >> n >> s;
    if (n % 2)
    {
        cout << "NO";
        return;
    }
    vector<pair<int, int>> arr(26);
    for (int i = 0; i < 26; i++)
    {
        arr[i] = {0, i};
    }
    for (int i = 0; i < n; i++)
    {
        arr[s[i] - 'a'].first++;
    }
    sort(arr.begin(), arr.end());
    if (arr[25].first > n / 2)
    {
        cout << "NO";
        return;
    }
    cout << "YES\n";
    string ans = "", temp = "";
    int i, ind;
    for (i = 0, ind = 25; i < n; i++)
    {
        if (arr[ind].first == 0)
        {
            ind--;
        }
        arr[ind].first--;
        if (i < n / 2)
        {
            ans += ('a' + arr[ind].second);
        }
        else
        {
            temp += ('a' + arr[ind].second);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << temp + ans;
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
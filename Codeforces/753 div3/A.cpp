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
    int arr[26];

    for (int i = 0; i < 26; i++)
    {
        char c;
        cin >> c;
        arr[c - 'a'] = i + 1;
    }
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 1; i < s.length(); i++)
    {
        ans += abs(arr[s[i] - 'a'] - arr[s[i - 1] - 'a']);
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
        solve(t);
        cout << "\n";
    }
}
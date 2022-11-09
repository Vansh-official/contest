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
#include <stack>

using namespace std;

set<int> s;

void solve(int T)
{
    int n;
    cin >> n;
    auto itr = s.begin();
    int ans = 0;
    while (*itr <= n && itr != s.end())
    {
        ans++;
        itr++;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int i = 1; i <= 1000; i++)
    {
        s.insert(i * i * i);
    }

    for (int i = 1; i <= sqrt(1000000000); i++)
    {
        s.insert(i * i);
    }

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}
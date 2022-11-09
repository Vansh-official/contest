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
#include <climits>

using namespace std;

void solve(int T)
{
    int n;
    string s;
    cin >> n >> s;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            c++;
        }
    }
    cout << min(c, n - c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
    }
}
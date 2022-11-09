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
#include <tuple>
#include <stack>
#include <climits>

using namespace std;

void solve(int T)
{
    int n;
    string s;
    cin >> n >> s;
    int i = 0;
    if (n > 1 && s[0] == s[1])
    {
        cout << s[0] << s[1];
        return;
    }
    for (; i < n; i++)
    {
        cout << s[i];
        if (i < n - 1 && s[i] < s[i + 1])
        {
            break;
        }
    }
    if (i == n)
    {
        i--;
    }
    while (i >= 0)
    {
        cout << s[i--];
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
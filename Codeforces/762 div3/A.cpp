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

void solve(int T)
{
    string s;
    cin >> s;
    if (s.length() % 2)
    {
        cout << "NO";
        return;
    }
    for (int i = 0, j = s.length() / 2; j < s.length(); j++, i++)
    {
        if (s[i] != s[j])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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
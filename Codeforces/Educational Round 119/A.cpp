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
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E')
        {
            c++;
        }
    }
    if (c == s.size() - 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
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
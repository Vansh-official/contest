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

int n, m, k, i, j;

void solve(int T)
{
    string s;
    cin >> s;
    int score = 0;
    for (i = 0; i < s.length(); i++)
        score += ((s[i] - 'a') + 1);
    if (s.length() == 1)
        cout << "Bob " << score;
    else if (s.length() % 2)
    {
        cout << "Alice " << score - 2 * min(s[0] - 'a' + 1, s[s.length() - 1] - 'a' + 1);
    }
    else
    {
        cout << "Alice " << score;
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
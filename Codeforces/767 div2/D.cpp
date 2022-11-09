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

bool isPal(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<string> s(n);
    vector<vector<int>> arr(26), brr(26);
    bool ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i].length() == 1 || (s[i].length() == 2 && s[i][0] == s[i][1]) ||
            (s[i].length() == 3 && s[i][0] == s[i][1] && s[i][1] == s[i][2]) || (s[i].length() == 3 && s[i][0] == s[i][2]))
        {
            ans = 1;
        }

        arr[s[i][0] - 'a'].push_back(i);
        brr[s[i][s[i].length() - 1] - 'a'].push_back(i);
    }
    if (ans)
    {
        cout << "YES";
        return;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            string x = s[arr[i][j]];
            int c = x[0] - 'a';
            for (int k = brr[c].size() - 1; k >= 0 && brr[c][k] > arr[i][j]; k--)
            {
                string y = x + s[brr[c][k]];
                if (isPal(y))
                {
                    ans = 1;
                    break;
                }
            }
        }
    }
    if (ans)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
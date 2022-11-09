#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
#include <queue>

using namespace std;

int n, m, i, j;

void printans(string ans, int t)
{
    cout << "Case #" << t << ": " << ans << endl;
}

void solve(int T)
{
    string s;
    cin >> n >> s;
    int l = 0, u = 0, num = 0, spc = 0;
    for (i = 0; i < n; i++)
        if (s[i] >= 65 && s[i] <= 90)
            u++;
        else if (s[i] >= 97 && s[i] <= 122)
            l++;
        else if (s[i] >= 48 && s[i] <= 57)
            num++;
        else if (s[i] == '*' || s[i] == '#' || s[i] == '@' || s[i] == '&')
            spc++;
    if (!l)
        s += "a";
    if (!u)
        s += "A";
    if (!num)
        s += "1";
    if (!spc)
        s += "&";
    while (s.length() < 7)
        s += "a";
    printans(s, T);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int p = 1; p <= t; p++)
    {
        solve(p);
    }
}
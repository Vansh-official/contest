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

set<int> pal;

bool isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++)
    {
        if (S[i] != S[S.length() - i - 1])
            return 0;
    }
    return 1;
}

void solve(int T)
{
    string s;
    cin >> s >> n;
    i = ((s[0] - '0') * 10) + (s[1] - '0');
    i *= 60;
    i += ((s[3] - '0') * 10) + (s[4] - '0');

    j = i;
    int ans = 0;
    do
    {
        if (pal.find(j) != pal.end())
            ans++;
        j += n;
        j %= 1440;
    } while (j != i);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (i = 0; i <= 1440; i++)
    {
        int temp = i / 60;
        string str1 = to_string(temp);
        if (str1.size() == 1)
            str1 = "0" + str1;
        temp = i % 60;
        string str2 = to_string(temp);
        if (str2.size() == 1)
            str2 = "0" + str2;
        if (isPalindrome(str1 + str2))
            pal.insert(i);
    }

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}
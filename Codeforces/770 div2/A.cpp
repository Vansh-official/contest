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

int n, k, m, x, y, i, j;

bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return 0;
        }
    }
    return 1;
}

void solve(int T)
{
    string s;
    cin >> n >> k >> s;
    if (k == 0)
    {
        cout << 1;
    }
    else if (isPalindrome(s))
    {
        cout << 1;
    }
    else
    {
        cout << 2;
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
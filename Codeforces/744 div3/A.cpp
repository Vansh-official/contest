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

void solve(int T)
{
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else if (s[i] == 'B')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if (b == a + c)
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
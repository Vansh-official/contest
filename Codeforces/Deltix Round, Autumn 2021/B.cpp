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
    int n, q;
    string s;
    cin >> n >> q >> s;
    int count = 0;
    set<int> loc;
    for (int i = 0; i < n; i++)
    {
        if (i + 2 < n && s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
        {
            loc.insert(i);
            count++;
        }
    }
    while (q--)
    {
        int x;
        char c;
        cin >> x >> c;
        x--;
        if (c == s[x])
        {
            cout << count << "\n";
            continue;
        }
        auto itr1 = loc.find(x);
        auto itr2 = loc.find(x - 1);
        auto itr3 = loc.find(x - 2);

        if (itr1 != loc.end())
        {
            loc.erase(itr1);
            count--;
        }
        else if (itr2 != loc.end())
        {
            loc.erase(itr2);
            count--;
        }
        else if (itr3 != loc.end())
        {
            loc.erase(itr3);
            count--;
        }

        if (x + 2 < n && c == 'a' && s[x + 1] == 'b' && s[x + 2] == 'c')
        {
            loc.insert(x);
            count++;
        }
        else if (x - 1 >= 0 && x + 1 < n && s[x - 1] == 'a' && c == 'b' && s[x + 1] == 'c')
        {
            loc.insert(x - 1);
            count++;
        }
        else if (x - 2 >= 0 && s[x - 2] == 'a' && s[x - 1] == 'b' && c == 'c')
        {
            loc.insert(x - 2);
            count++;
        }
        s[x] = c;
        cout << count << "\n";
    }
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
        cout << "\n";
    }
}
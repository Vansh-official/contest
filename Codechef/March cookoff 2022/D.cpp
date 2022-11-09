#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <climits>
#include <numeric>

using namespace std;

int n, m, i, j;

void solve(int T)
{
    cin >> n;
    set<int> s;
    for (i = 1; i <= 2 * n; i++)
    {
        s.insert(i);
    }
    for (i = 1; i <= n / 2; i++)
    {
        j = *s.begin();
        cout << j << " " << 2 * j << " ";
        s.erase(j);
        s.erase(2 * j);
    }
    if (n % 2)
    {
        cout << *s.begin();
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
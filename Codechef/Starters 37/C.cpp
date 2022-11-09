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

int n, m, p, i, j;

void solve(int T)
{
    cin >> n;
    int zero = 0, one = 0;
    for (i = 0; i < n; i++)
    {
        cin >> m;
        if (m)
            one++;
        else
            zero++;
    }
    bool turn = 1;
    while (1)
    {
        if (!zero)
        {
            cout << 1;
            break;
        }
        if (!one)
        {
            cout << 0;
            break;
        }
        if (turn)
            zero--;
        else
            one--;
        turn = !turn;
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
        solve(i);
        cout << "\n";
    }
}
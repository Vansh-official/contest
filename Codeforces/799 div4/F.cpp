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

int n, m, k, i, j, x;

void solve(int T)
{
    cin >> n;
    vector<int> count(10, 0);
    for (i = 0; i < n; i++)
    {
        cin >> x;
        x %= 10;
        count[x]++;
    }
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            for (k = 0; k < 10; k++)
                if ((i + j + k) % 10 == 3)
                {
                    count[i]--;
                    count[j]--;
                    count[k]--;
                    if (count[i] >= 0 && count[j] >= 0 && count[k] >= 0)
                    {
                        cout << "YES";
                        return;
                    }
                    else
                    {
                        count[i]++;
                        count[j]++;
                        count[k]++;
                    }
                }
    cout << "NO";
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
        cout << "\n";
    }
}
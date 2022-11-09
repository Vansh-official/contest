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

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool p = 1;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % (i + 2))
        {
            x++;
            continue;
        }
        bool f = 0;
        for (int j = 1; j <= x; j++)
        {
            if (arr[i] % (i + 2 - j))
            {
                f = 1;
                break;
            }
        }
        if (!f)
        {
            p = 0;
            break;
        }
        x++;
    }
    if (p)
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
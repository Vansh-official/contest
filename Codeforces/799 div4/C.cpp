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

void solve(int T)
{
    vector<string> arr(8);
    vector<int> count(8);
    for (i = 0; i < 8; i++)
        cin >> arr[i];
    for (i = 0; i < 8; i++)
    {
        k = 0;
        for (j = 0; j < 8; j++)
            if (arr[i][j] == '#')
                k++;
        count[i] = k;
    }
    for (i = 1; i < 7; i++)
    {
        if (count[i] == 1 && count[i - 1] == 2 && count[i + 1] == 2)
        {
            int x, y;
            for (j = 0; j < 8; j++)
            {
                if (arr[i][j] == '#')
                {
                    x = i + 1;
                    y = j + 1;
                    break;
                }
            }
            cout << x << " " << y;
            return;
        }
    }
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
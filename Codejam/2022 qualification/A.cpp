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

void solve(int T)
{
    int r, c;
    cin >> r >> c;
    vector<vector<char>> arr((2 * r) + 1, vector<char>((2 * c) + 1));
    arr[0][0] = arr[0][1] = arr[1][0] = arr[1][1] = '.';
    for (int i = 2; i < (2 * c) + 1; i++)
    {
        if (i % 2 == 0)
        {
            arr[0][i] = '+';
        }
        else
        {
            arr[0][i] = '-';
        }
    }
    for (int i = 2; i < (2 * c) + 1; i++)
    {
        if (i % 2 == 0)
        {
            arr[1][i] = '|';
        }
        else
        {
            arr[1][i] = '.';
        }
    }
    for (int i = 2; i < (2 * r) + 1; i++)
    {
        for (int j = 0; j < (2 * c) + 1; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    arr[i][j] = '+';
                }
                else
                {
                    arr[i][j] = '-';
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    arr[i][j] = '|';
                }
                else
                {
                    arr[i][j] = '.';
                }
            }
        }
    }
    cout << "Case #" << T << ":\n";
    for (int i = 0; i < (2 * r) + 1; i++)
    {
        for (int j = 0; j < (2 * c) + 1; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
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
    }
}
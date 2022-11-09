#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

void solve(int t)
{
    int row, column;
    cin >> row >> column;
    vector<vector<int>> arr(row, vector<int>(column));
    long long ans = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            int l = 0, r = 0, u = 0, d = 0;
            for (int k = j; k >= 0; k--)
            {
                if (arr[i][k] == 1)
                {
                    l++;
                }
                else
                {
                    break;
                }
            }
            for (int k = j; k < column; k++)
            {
                if (arr[i][k] == 1)
                {
                    r++;
                }
                else
                {
                    break;
                }
            }
            for (int k = i; k >= 0; k--)
            {
                if (arr[k][j] == 1)
                {
                    u++;
                }
                else
                {
                    break;
                }
            }
            for (int k = i; k < row; k++)
            {
                if (arr[k][j] == 1)
                {
                    d++;
                }
                else
                {
                    break;
                }
            }
            if (u > 1)
            {
                if (l / 2 >= min(u, 2))
                {
                    ans += (min(l / 2, u) - 1);
                }
                if (u / 2 >= min(l, 2) && l > 1)
                {
                    ans += (min(l, u / 2) - 1);
                }
                if (r / 2 >= min(u, 2))
                {
                    ans += (min(r / 2, u) - 1);
                }
                if (u / 2>= min(r, 2) && r > 1)
                {
                    ans += (min(u / 2, r) - 1);
                }
            }
            if (d > 1)
            {
                if (l / 2 >= min(d, 2))
                {
                    ans += (min(l / 2, d) - 1);
                }
                if (d / 2 >= min(l, 2) && l > 1)
                {
                    ans += (min(l, d / 2) - 1);
                }
                if (r / 2 >= min(d, 2))
                {
                    ans += (min(r / 2, d) - 1);
                }
                if (d / 2 >= min(r, 2) && r > 1)
                {
                    ans += (min(d / 2, r) - 1);
                }
            }
        }
    }
    cout << "case #" << t << ": " << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int a = 1; a <= t; a++)
    {
        solve(a);
    }
}
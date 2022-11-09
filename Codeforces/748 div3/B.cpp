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
    long long n;
    cin >> n;
    if (n % 25 == 0)
    {
        cout << 0;
        return;
    }
    long long temp = n;
    long long arr[8];
    for (int i = 0; i < 8; i++)
    {
        arr[i] = -1;
    }
    int count = 1;
    while (temp > 0)
    {
        long long x = temp % 10;
        temp /= 10;
        if (x == 0)
        {
            if (arr[1] == -1)
            {
                arr[1] = arr[5] = count;
            }
            else if (arr[0] == -1)
            {
                arr[0] = count;
            }
        }
        else if (x == 5)
        {
            if (arr[7] == -1 && arr[6] == -1)
            {
                arr[7] = count;
            }
            if (arr[3] == -1 && arr[2] == -1)
            {
                arr[3] = count;
            }
            if ((arr[4] == -1) && (arr[5] != -1))
            {
                arr[4] = count;
            }
        }
        else if (x == 7 && arr[6] == -1 && arr[7] != -1)
        {
            arr[6] = count;
        }
        else if (x == 2 && arr[2] == -1 && arr[3] != -1)
        {
            arr[2] = count;
        }
        count++;
    }
    long long ans = 99999999999;
    if (arr[0] != -1)
    {
        ans = min(ans, arr[0] - 2);
    }
    if (arr[2] != -1 && arr[3] != -1)
    {
        ans = min(ans, arr[2] - 2);
    }
    if (arr[4] != -1 && arr[5] != -1)
    {
        ans = min(ans, arr[4] - 2);
    }
    if (arr[6] != -1 && arr[7] != -1)
    {
        ans = min(ans, arr[6] - 2);
    }
    cout << ans;
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
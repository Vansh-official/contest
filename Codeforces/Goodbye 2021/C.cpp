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
#include <tuple>
#include <stack>
#include <climits>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<double> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1 || n == 2)
    {
        cout << 0;
        return;
    }
    int num = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double d = (arr[j] - arr[i]) / (j - i);
            int c = 2;
            {
                for (int k = j + 1; k < n; k++)
                {
                    if ((arr[k] - arr[j]) / (k - j) == d)
                    {
                        c++;
                    }
                }
            }
            num = max(num, c);
        }
    }
    cout << max(n - num, 0);
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
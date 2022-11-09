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
#include <stack>

using namespace std;

void solve(int T)
{
    int n, x;
    cin >> n;
    priority_queue<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        while (x > n)
        {
            x /= 2;
        }
        arr.push(x);
    }
    int cur = n;
    while (!arr.empty())
    {
        x = arr.top();
        arr.pop();
        if (x == cur)
        {
            cur--;
            continue;
        }
        if (x < cur)
        {
            cout << "NO";
            return;
        }
        x /= 2;
        arr.push(x);
    }
    cout << "YES";
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
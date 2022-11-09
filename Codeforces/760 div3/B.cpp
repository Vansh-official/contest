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
    int n;
    cin >> n;
    vector<string> arr(n - 2);
    for (int i = 0; i < n - 2; i++)
    {
        cin >> arr[i];
    }
    bool f = 1;
    for (int i = 0; i < n - 2; i++)
    {
        cout << arr[i][0];
        if ((i < n - 3 && arr[i][1] != arr[i + 1][0]) && (f))
        {
            cout << arr[i][1];
            f = 0;
        }
    }
    cout << arr[n - 3][1];
    if (f)
    {
        cout << "a";
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
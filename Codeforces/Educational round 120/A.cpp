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
    vector<long long> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());
    if (arr[1] == arr[2] && arr[0] % 2 == 0)
    {
        cout << "YES";
        return;
    }
    if (arr[0] == arr[1] && arr[2] % 2 == 0)
    {
        cout << "YES";
        return;
    }
    if (arr[2] == arr[0] + arr[1])
    {
        cout << "YES";
        return;
    }
    cout << "NO";
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
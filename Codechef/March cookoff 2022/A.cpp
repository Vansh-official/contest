#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <climits>
#include <numeric>

using namespace std;

int n, m, i, j;

void solve(int T)
{
    vector<int> arr(3);
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());
    cout << ((n - 1) * arr[0]) + arr[1];
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
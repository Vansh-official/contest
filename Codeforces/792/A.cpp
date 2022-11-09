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
    cin >> n;
    vector<int> arr;
    m = n;
    i = 0;
    while (n)
    {
        arr.push_back(n % 10);
        n /= 10;
    }
    sort(arr.begin(), arr.end());
    if (arr.size() == 2 && (arr[0] * 10) + arr[1] == m)
        cout << arr[1];
    else
        cout << arr[0];
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
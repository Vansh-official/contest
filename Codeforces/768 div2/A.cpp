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

int n, x, y, i, j;
char c;
string s;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n), brr(n);
    x = -1, y = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > x)
        {
            x = arr[i];
            y = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
        if (brr[i] > x)
        {
            x = brr[i];
            y = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (y == 1 && arr[i] < brr[i])
        {
            swap(arr[i], brr[i]);
        }
        else if (y == 2 && brr[i] < arr[i])
        {
            swap(arr[i], brr[i]);
        }
    }
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    cout << arr[n - 1] * brr[n - 1];
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
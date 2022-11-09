#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

int n, m, i, j;

void solve(int T)
{
    cin >> n;
    vector<long long> arr(n), brr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    sort(arr.begin(), arr.end());
    for (i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && brr[j - 1] > brr[j] && (brr[j] + brr[j - 1]) % 2 == 1)
        {
            swap(brr[j], brr[j - 1]);
            j--;
        }
    }

    for (i = 0; i < n - 1; i++)
    {

        j = i;
        while (j < n - 1 && brr[j + 1] < brr[j] && (brr[j] + brr[j + 1]) % 2 == 1)
        {
            swap(brr[j], brr[j + 1]);
            j++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != brr[i])
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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
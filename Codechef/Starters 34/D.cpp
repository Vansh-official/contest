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

void display(vector<int> a, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == i + 1)
        {
            return;
        }
        ans = ans ^ abs(a[i] - i - 1);
    }
    if (!ans)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

void findPermutations(int n)
{
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    do
    {
        display(arr, n);
    } while (next_permutation(arr.begin(), arr.end()));
}

void solve(int T)
{
    int n;
    cin >> n;
    findPermutations(n);
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
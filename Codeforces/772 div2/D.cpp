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
    /*long long p;
    cin >> n >> p;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());*/
    long long p = 3;
    set<long long> s;
    s.insert(p);
    auto itr = s.begin();
    for (i = 0; i < 50; i++, itr++)
    {
        p = *itr;
        s.insert(4 * p);
        s.insert((2 * p) + 1);
    }
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}
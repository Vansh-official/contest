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
    set<int> arr;
    for (i = 0; i < n; i++)
    {
        cin >> m;
        arr.insert(m);
    }
    arr.insert(6);
    arr.insert(7);
    arr.insert(13);
    arr.insert(14);
    arr.insert(20);
    arr.insert(21);
    arr.insert(27);
    arr.insert(28);
    cout << arr.size();
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
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

int n, x, y, i, j, k;
char c;
string s;

void solve(int T)
{
    cin >> n >> k;
    x = 0;
    set<int> arr;
    for (i = 0; i < n - 1; i += 2)
    {
        x += (i & (i + 1));
        arr.insert(i);
        arr.insert(i + 1);
    }
    if (k > x)
    {
        cout << -1;
        return;
    }
    for (i = n - 2; i >= 2; i--)
    {
        if (k >= i)
        {
            k -= i;
            cout << i << " " << i + 1 << "\n";
            arr.erase(i);
            arr.erase(i + 1);
        }
    }
    if (k == 1)
    {
        auto itr = arr.begin();
        itr++;
        itr++;
        itr++;
        cout << 1 << " " << *itr << "\n";
        k--;
        arr.erase(itr);
        arr.erase(1);
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
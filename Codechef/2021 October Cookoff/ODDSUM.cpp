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

void solve(int T)
{
    long long n;
    cin >> n;
    long long ans;
    if (n == 1 || n == 2)
    {
        cout << 1;
        return;
    }
    ans = (4 + ((n - 3) * 2));
    ans *= (n - 2);
    ans /= 2;
    cout << ans + 1;
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
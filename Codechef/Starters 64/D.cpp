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

int n, i, j;
string s;

long long modu = 1000000007;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve(int T)
{
    cin>>n;
    vector<int> a(2*n);
    for(i=0;i<2*n;i++)
        cin>>a[i];
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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
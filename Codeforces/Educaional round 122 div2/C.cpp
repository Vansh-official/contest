#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <climits>

using namespace std;

long long n, m, k, x, y, i, j;
char c;
string s;

void solve(int T)
{
    long long hc, dc, hm, dm, w, a;
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;
    i = 0;
    while (i <= k)
    {
        j = k - i;
        x = i * w;
        y = j * a;
        long long t1 = hm / (dc + x), t2 = (hc + y) / dm;
        if (hm % (dc + x))
        {
            t1++;
        }
        if ((hc + y) % dm)
        {
            t2++;
        }
        if (t1 <= t2)
        {
            cout << "YES";
            return;
        }
        i++;
    }
    cout << "NO";
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
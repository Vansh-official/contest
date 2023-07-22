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
#include <sstream>
#include <tuple>
#include <iomanip>

using namespace std;

int n, m, i, j, k;
string s;
long long M = 1000000007;

void solve(int T)
{
    int cur;
    cin >> cur;
    int l = 1, r = 1000000, mid, x, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        cout << "+ " << mid;
        cout.flush();
        cin >> x;
        if (x < cur)
        {
            r = mid - 1;
        }
        else if (x > cur)
        {
            if (cur + mid == x)
                l = mid + 1;
            else
                r = mid - 1;
        }
        else
        {
            if (mid == 1)
            {
                ans = mid;
                break;
            }
            cur = x;
            int temp = mid / 2;
            cout << "+ " << temp;
            cout.flush();
            cin >> x;
            if ((cur + temp) % (mid + 1) == x)
            {
                ans = mid;
                break;
            }
        }
        cur = x;
    }
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    t = 1;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}
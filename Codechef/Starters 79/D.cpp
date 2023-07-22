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

int n, m, i, j;
string s;
long long modu = 100000000;

void solve(int T)
{
    int q;
    cin >> n >> m >> q;
    while (q--)
    {
        long long sum, cursum = 0;
        cin >> sum;
        map<long long, long long> a;
        for (long long x = n; x > 0; x--)
        {
            long long y = 1;
            while (cursum < sum && y <= m)
            {
                if (cursum + x <= sum)
                {
                    cursum += x;
                    a[x]++;
                }
                else
                {
                    auto itr = a.rbegin();
                    if (itr == a.rend())
                        break;
                    cursum -= itr->first;
                    itr->second--;
                    if (itr->second == 0)
                        a.erase(itr->first);
                    cursum += x;
                    a[x]++;
                }
                y++;
            }
            if (cursum == sum)
            {
                cout << a.begin()->first << " " << a.size() << "\n";
                for (auto itr = a.begin(); itr != a.end(); itr++)
                    cout << itr->second << " ";
                cout << "\n";
                break;
            }
        }
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
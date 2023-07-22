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
    cin >> n;
    vector<int> a;
    string ans = "";
    bool start;
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!a.size())
        {
            start = 1;
            a.push_back(x);
            ans += "1";
        }
        else
        {
            if (!start)
            {
                if (x >= a[a.size() - 1] && x <= a[0])
                {
                    a.push_back(x);
                    ans += "1";
                }
                else
                    ans += "0";
            }
            else
            {
                if (x >= a[a.size() - 1])
                {
                    a.push_back(x);
                    ans += "1";
                }
                else if (x <= a[0])
                {
                    a.push_back(x);
                    ans += "1";
                    start = 0;
                }
                else
                    ans += "0";
            }
        }
    }
    cout << ans;
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
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}
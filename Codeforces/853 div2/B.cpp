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
long long modu = 1000000007;

bool checkPal(string q)
{
    for (i = 0, j = q.length() - 1; i < j; i++, j--)
        if (q[i] != q[j])
            return 0;
    return 1;
}

void solve(int T)
{
    cin >> n >> s;
    vector<int> ind;
    for (i = 0, j = n - 1; i < j; i++, j--)
        if (s[i] != s[j])
            ind.push_back(i);
    for (i = 1; i < ind.size(); i++)
        if (ind[i] != ind[i - 1] + 1)
        {
            cout << "No";
            return;
        }
    cout << "Yes";
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
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
    cin >> n >> s;
    vector<char> a;
    for (i = 0; i < n; i++)
        s[i] = tolower(s[i]);
    for (i = 0; i < n; i++)
    {
        while (i < n - 1 && s[i] == s[i + 1])
            i++;
        a.push_back(s[i]);
    }
    if (a.size() == 4 && a[0] == 'm' && a[1] == 'e' && a[2] == 'o' && a[3] == 'w')
        cout << "YES";
    else
        cout << "NO";
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
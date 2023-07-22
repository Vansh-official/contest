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

int n, m, i, j, k;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> s;
    sort(s.begin(), s.end());
    vector<int> count;
    for (i = 0; i < 4; i++)
    {
        j = 1;
        while (i < 3 && s[i] == s[i + 1])
        {
            i++;
            j++;
        }
        count.push_back(j);
    }
    sort(count.begin(), count.end());
    if (count.size() == 1)
        cout << -1;
    else if (count.size() == 2)
    {
        if (count[0] == 1 || count[0] == 3)
            cout << 6;
        else
            cout << 4;
    }
    else if (count.size() == 3)
        cout << 4;
    else
        cout << 4;
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}
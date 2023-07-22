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
    string temp = "";
    cin >> n >> s;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
            temp += "F";
        if (i % 5 == 0)
            temp += "B";
    }
    for (i = 0; i + n < temp.size(); i++)
    {
        bool flag = 1;
        for (j = 0; j < n; j++)
            if (temp[i + j] != s[j])
            {
                flag = 0;
                break;
            }
        if (flag)
        {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
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
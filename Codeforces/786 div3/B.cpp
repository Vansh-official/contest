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

int n, m, k, i, j;

map<string, int> arr;

void solve(int T)
{
    string s;
    cin >> s;
    cout << arr.find(s)->second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int count = 1;
    for (i = 0; i < 26; i++)
        for (j = 0; j < 26; j++)
        {
            if (i == j)
                continue;
            char a = 'a' + i, b = 'a' + j;
            string p;
            p += a;
            p += b;
            arr.insert({p, count++});
        }
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}
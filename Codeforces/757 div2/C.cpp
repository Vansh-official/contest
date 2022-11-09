#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <cmath>

using namespace std;

bool sortbysec(const pair<long long, int> &a, const pair<long long, int> &b)
{
    return (a.first > b.first);
}

void solve(int T)
{
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
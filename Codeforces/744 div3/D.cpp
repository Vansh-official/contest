#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    map<int, int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto itr = arr.find(x);
        if (itr != arr.end())
        {
            itr->second++;
        }
        else
        {
            arr.insert(x, 1);
        }
    }
    long long ans = 0;
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
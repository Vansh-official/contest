#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <tuple>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> sorted(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted.begin(), sorted.end());
    vector<tuple<int, int, int>> result;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == sorted[i])
        {
            continue;
        }
        int l = i + 1, r, d;
        int temp = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int res = temp;
            temp = arr[j];
            arr[j] = res;
            if (temp == sorted[i])
            {
                arr[i] = temp;
                r = j + 1;
                d = j - i;
                break;
            }
        }
        result.push_back(make_tuple(l, r, d));
    }
    cout << result.size();
    for (int i = 0; i < result.size(); i++)
    {
        cout << "\n";
        cout << get<0>(result[i]) << " " << get<1>(result[i]) << " " << get<2>(result[i]);
    }
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
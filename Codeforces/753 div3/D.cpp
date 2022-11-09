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
    vector<int> arr(n), blue, red;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            blue.push_back(arr[i]);
        }
        else
        {
            red.push_back(arr[i]);
        }
    }
    sort(blue.begin(), blue.end());
    sort(red.begin(), red.end());
    int j = 1;
    for (int i = 0; i < blue.size(); i++)
    {
        if (blue[i] < j)
        {
            cout << "NO";
            return;
        }
        j++;
    }
    for (int i = 0; i < red.size(); i++)
    {
        if (red[i] > j)
        {
            cout << "NO";
            return;
        }
        j++;
    }
    cout << "YES";
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
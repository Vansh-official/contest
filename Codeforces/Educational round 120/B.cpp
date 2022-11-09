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
#include <stack>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> s;
    vector<pair<int, int>> liked, disliked;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            liked.push_back({arr[i], i});
        }
        else
        {
            disliked.push_back({arr[i], i});
        }
    }
    sort(liked.begin(), liked.end());
    sort(disliked.begin(), disliked.end());
    int i = 1;
    for (int j = 0; j < disliked.size(); j++, i++)
    {
        arr[disliked[j].second] = i;
    }
    for (int j = 0; j < liked.size(); i++, j++)
    {
        arr[liked[j].second] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
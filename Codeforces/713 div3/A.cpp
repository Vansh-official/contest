#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i;
        }
        sort(arr.begin(), arr.end());
        if (arr[0].first == arr[1].first) {
            cout << arr[n - 1].second + 1 << endl;
        }
        else
        {
            cout << arr[0].second + 1 << endl;
        }
    }
}
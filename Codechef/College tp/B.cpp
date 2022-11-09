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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int maxi = arr[0], ans = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, arr[i]);
            sum += arr[i];
            int y = maxi * (maxi + 1);
            y /= 2;
            if (sum == y) ans++;
        }
        cout << ans << endl;
    }
}
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
        vector<long long> arr(n + 2);
        set<long long> s;
        long long sum = 0;
        for (int i = 0; i < n + 2; i++) {
            cin >> arr[i];
            sum += arr[i];
            if (s.find(arr[i]) == s.end()) {
                s.insert(arr[i]);
            }
        }
        sort(arr.begin(), arr.end());
        int x = -1;
        long long ans = -1;
        for (int i = 0; i < n + 2; i++) {
            if ((sum - arr[i]) % 2 == 0 && s.find((sum - arr[i]) / 2) != s.end()) {
                long long j = (sum - arr[i]) / 2;
                if (j == arr[i]) {
                    bool cond = 0;
                    if ((i > 0 && arr[i - 1] == j) || (i < n + 1 && arr[i + 1] == j)) {
                        cond = 1;
                    }
                    if (!cond) {
                        break;
                    }
                }
                x = i;
                ans = (sum - arr[i]) / 2;
                break;
            }
        }
        if (x == -1) {
            cout << -1 << endl;
            continue;
        }
        else {
            for (int i = 0; i < n + 2; i++) {
                if (i == x) {
                    continue;
                }
                else if (arr[i] == ans) {
                    ans = -1;
                    continue;
                }
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
}
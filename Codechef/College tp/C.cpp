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
        long long m;
        cin >> n >> m;
        vector<long long> arr(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }     
        bool cond = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            sum -= m;
            if (sum < 0) {
                cout << i + 1 << endl;
                cond = 1;
                break;
            }
        }
        if (cond) continue;
        long long y = sum / m;
        cout << n + y + 1 << endl;
    }
}
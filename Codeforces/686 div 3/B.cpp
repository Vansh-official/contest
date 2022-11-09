#include<iostream>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int>* arr = new pair<int, int> [n];
        int* fr = new int[n + 1];
        for (int i = 0; i <= n; i++)
            fr[i] = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = make_pair(a, i + 1);
            fr[arr[i].first]++;
        }
        sort(arr, arr + n);
        bool cond = false;
        for (int i = 0; i < n; i++)
        {
            if (fr[arr[i].first] == 1)
            {
                cout << arr[i].second << endl;
                cond = true;
                break;
            }
        }
        if (!cond)
            cout << -1 << endl;
    }
}
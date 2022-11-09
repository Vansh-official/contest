#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
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
        int sum = 0;
        int onec = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] == 1)
                onec++;
        }
        if (sum % 2 == 0 && (n % 2 == 0 || onec))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
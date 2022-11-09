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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<double> a;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    a.push_back(0.5 * ((double)(abs(arr[i] - arr[j]))));
                }
            }
        }
        sort(a.begin(), a.end());
        cout << distance(a.begin(), (unique(a.begin(), a.end()))) << endl;
    }
}
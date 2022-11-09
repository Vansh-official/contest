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
        int w, h, n;
        cin >> w >> h >> n;
        int sum = 0;
        int count = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            count *= 2;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            count *= 2;
        }
        if (count < n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
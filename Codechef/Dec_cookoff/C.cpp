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
        string s;
        cin >> s;
        int ct = 0;
        int n = s.length();
        if (n % 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                    ct++;
            }
            if (ct == 0 || ct == n)
            {
                cout << -1 <<endl;
            }
            else
            {
                cout << abs((n / 2) - ct) << endl;
            }
        }
    }
}
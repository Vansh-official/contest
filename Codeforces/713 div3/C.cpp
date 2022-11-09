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
        int a, b;
        string s;
        cin >> a >> b >> s;
        int n = s.length();
        bool cond = 1;
        for (int i = 0, j = n - 1; i <= j; i++, j--) {
            if (s[i] == '?' || s[j] == '?') {
                continue;
            }
            else if (i == j) {
                if (s[i] == '1') {
                    b--;
                }
                else {
                    a--;
                }
            }
            else if (s[i] != s[j]) {
                cond = 0;
                break;
            }
            else if (s[i] == '1') {
                b -= 2;
            }
            else {
                a -= 2;
            }
        }
        if (!cond) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (s[i] == '?' && s[j] != '?') {
                if (s[j] == '1' && b > 1) {
                    s[i] = '1';
                    b -= 2;
                    continue;
                }
                else if (s[j] == '0' && a > 1) {
                    s[i] = '0';
                    a -= 2;
                    continue;
                }
                else {
                    cond = 0;
                    break;
                }
            }
            else if (s[i] != '?' && s[j] == '?') {
                if (s[i] == '1' && b > 1) {
                    s[j] = '1';
                    b -= 2;
                    continue;
                }
                else if (s[i] == '0' && a > 1) {
                    s[j] = '0';
                    a -= 2;
                    continue;
                }
                else {
                    cond = 0;
                    break;
                }
            }
        }
        if (!cond) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0, j = n - 1; i <= j; i++, j--) {
            if (i == j && s[i] == '?') {
                if (a > 0) {
                    s[i] = '0';
                    a--;
                }
                else if (b > 0) {
                    s[i] = '1';
                    b--;
                }
                else {
                    cond = 0;
                    break;
                }
            }
            else if (s[i] == '?' && s[j] == '?') {
                if (a > 1) {
                    a -= 2;
                    s[i] = s[j] = '0';
                }
                else if (b > 1) {
                    b -= 2;
                    s[i] = s[j] = '1';
                }
                else {
                    cond = 0;
                    break;
                }
            }
        }
        if (a != 0 || b != 0 || !cond) {
            cout << -1 << endl;
        }
        else {
            cout << s << endl;
        }
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
#include <queue>

using namespace std;

int n, m, i, j, modu = 1000000007;
vector<int> arr;

void printans(string ans, int t)
{
    cout << "Case #" << t << ": " << ans << "\n";
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
        return 1;
    else
        return 0;
}

void rec(string s, int count)
{
    if (!s.length())
    {
        arr.push_back(count);
        return;
    }
    for (int p = 0; p < s.length(); p++)
    {
        string temp = s;
        temp.erase(temp.begin() + p);
        if (isPalindrome(temp))
            rec(temp, count + 1);
        else
            rec(temp, count);
    }
}

void solve(int T)
{
    string s;
    cin >> n >> s;
    arr.clear();
    rec(s, 0);
    int dem = n, num = 0, temp;
    for (i = 0; i < n; i++)
        num += arr[i];
    temp = gcd(num, dem);
    num /= temp;
    dem /= temp;
    num %= modu;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int p = 1; p <= t; p++)
    {
        solve(p);
    }
}
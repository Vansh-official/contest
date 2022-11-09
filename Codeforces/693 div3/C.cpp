#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

int n;
vector<int> dp(200005);
vector<int> arr(200005);

int rec(int i, int score)
{
    if (i >= n)
        return score;
    if (dp[i] != -1)
        return score + dp[i];
    else
    {
        dp[i] = rec(i + arr[i], arr[i]);
        return score + dp[i];
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            dp[i] = -1;
        }
        int maxscore = 0;
        for (int i = 0; i < n; i++)
        {
            maxscore = max(maxscore, rec(i, 0));
        }
        cout << maxscore << endl;
        for (int i = 0; i < n; i++)
        {
            dp[i] = -1;
        }
    }
}
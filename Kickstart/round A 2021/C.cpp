#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

void solve(int t)
{
    long long ans=0;
    int r, c;
    cin >> r >> c;
    vector<vector<int>> arr(r, vector<int>(c));
    cout << "case #" << t << ": " << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int a = 1; a <= t; a++)
    {
        solve(a);
    }
}
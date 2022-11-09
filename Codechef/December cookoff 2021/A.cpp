#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <queue>
#include <stack>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i <= sqrt(n - 1); i++)
    {
        if ((n - 1) % i == 0)
        {
            c++;
            if (i * i != (n - 1))
            {
                c++;
            }
        }
    }
    cout << c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}
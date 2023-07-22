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
#include <climits>
#include <sstream>
#include <tuple>
#include <iomanip>

using namespace std;

int n, m, k;
string s;
long long M = 1000000007;

vector<int> least_prime(1000001, 0);

void leastPrimeFactor()
{
    least_prime[1] = 1;
    for (long long i = 2; i <= 1000000; i++)
    {
        if (least_prime[i] == 0)
        {
            least_prime[i] = i;
            for (long long j = i * i; j <= 1000000; j += i)
                if (least_prime[j] == 0)
                    least_prime[j] = i;
        }
    }
}

void solve(int T)
{
    cin >> n >> m;
    if (n == 1 || m == 1)
        cout << "YES";
    else if (least_prime[n] <= m)
        cout << "NO";
    else
        cout << "YES";
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    leastPrimeFactor();
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}
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

int n, m, i, j;
string s;
long long modu = 100000000;

class DisjSet
{
    int *rank, *parent, n;

public:
    DisjSet(int n)
    {
        rank = new int[n];
        parent = new int[n];
        this->n = n;
        makeSet();
    }
    void makeSet()
    {
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }
    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);
        if (xset == yset)
            return;
        if (rank[xset] < rank[yset])
        {
            parent[xset] = yset;
        }
        else if (rank[xset] > rank[yset])
        {
            parent[yset] = xset;
        }
        else
        {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
};

void dfs(int cur, DisjSet &dsu)
{
    if (cur + m < n && dsu.find(cur) != dsu.find(cur + m))
    {
        dsu.Union(cur, cur + m);
        dfs(cur + m, dsu);
    }
    if (cur + m + 1 < n && dsu.find(cur) != dsu.find(cur + m + 1))
    {
        dsu.Union(cur, cur + m + 1);
        dfs(cur + m + 1, dsu);
    }
    if (cur - m >= 0 && dsu.find(cur) != dsu.find(cur - m))
    {
        dsu.Union(cur, cur - m);
        dfs(cur - m, dsu);
    }
    if (cur - m - 1 >= 0 && dsu.find(cur) != dsu.find(cur - m - 1))
    {
        dsu.Union(cur, cur - m - 1);
        dfs(cur - m - 1, dsu);
    }
}

void solve(int T)
{
    string q;
    cin >> n >> m >> s >> q;
    vector<int> a(26, 0), b(26, 0);
    for (i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
        b[q[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
        if (a[i] != b[i])
        {
            cout << "NO";
            return;
        }
    DisjSet dsu(n);
    for (i = 0; i < n; i++)
        dfs(i, dsu);
    map<int, vector<int>> arr;
    for (i = 0; i < n; i++)
        arr[dsu.find(i)].push_back(i);
    for (auto itr = arr.begin(); itr != arr.end(); itr++)
    {
        vector<int> temp = itr->second;
        vector<int> cx(26, 0), cy(26, 0);
        for (i = 0; i < temp.size(); i++)
        {
            cx[s[temp[i]] - 'a']++;
            cy[q[temp[i]] - 'a']++;
        }
        for (i = 0; i < 26; i++)
            if (cx[i] != cy[i])
            {
                cout << "NO";
                return;
            }
    }
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
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}
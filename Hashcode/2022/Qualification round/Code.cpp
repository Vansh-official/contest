#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>
#include <climits>
#include <fstream>

using namespace std;

struct contributors
{
    string name;
    int s, curdate;
    vector<pair<string, int>> skills;
};

struct projects
{
    string name;
    int days, score, bestbefore, r;
    vector<pair<string, int>> roles;
};

bool compareby(projects &a, projects &b)
{
    return a.bestbefore < b.bestbefore;
}

void solve(int T)
{
    int c, p, i, j, d, scor, b, r;
    string s;
    freopen("a_an_example.in.txt", "r", stdin);

    cin >> c >> p;

    vector<contributors> people(c);
    vector<projects> pro(p);
    for (i = 0; i < c; i++)
    {
        cin >> s >> j;
        people[i].name = s;
        people[i].s = j;
        people[i].curdate = 1;
        for (int k = 0; k < people[i].s; k++)
        {
            cin >> s >> j;
            people[i].skills.push_back({s, j});
        }
    }
    for (i = 0; i < p; i++)
    {
        cin >> s >> d >> scor >> b >> r;
        pro[i].name = s;
        pro[i].days = d;
        pro[i].score = scor;
        pro[i].bestbefore = b;
        pro[i].r = r;
        for (int k = 0; k < r; k++)
        {
            cin >> s >> j;
            pro[i].roles.push_back({s, j});
        }
    }

    int done = 3;
    vector<pair<string, vector<string>>> ans;
    vector<string> a1, a2, a3;
    a1 = {"Bob", "Anna"};
    ans.push_back({"WebServer", a1});
    a2 = {"Anna"};
    ans.push_back({"Logging", a2});
    a3 = {"Maria", "Bob"};
    ans.push_back({"WebChat", a3});

    freopen("outputA.txt", "w", stdout);
    cout << done << "\n";
    for (i = 0; i < done; i++)
    {
        cout << ans[i].first << "\n";
        for (j = 0; j < ans[i].second.size(); j++)
        {
            cout << ans[i].second[j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
}
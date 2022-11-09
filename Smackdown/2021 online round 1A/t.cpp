#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <queue>
#include <numeric>
#include <time.h>

using namespace std;

int arr[5];
vector<int> temp1, temp2, ans1, ans2;
int Mdiff = 20000001;

void calc()
{
    if (temp1.size() == 0 || temp2.size() == 0)
    {
        return;
    }
    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());
    int x = temp1[temp1.size() - 1] - temp1[0];
    int y = temp2[temp2.size() - 1] - temp2[0];
    x = abs(x - y);
    if (x < Mdiff)
    {
        Mdiff = x;
        ans1.empty();
        ans2.empty();
        ans1 = temp1;
        ans2 = temp2;
    }

    return;
}

void rec(int i)
{
    if (i == 5)
    {
        return calc();
    }
    temp1.push_back(arr[i]);
    rec(i + 1);
    temp1.pop_back();

    temp2.push_back(arr[i]);
    rec(i + 1);
    temp2.pop_back();

    return;
}

void solve(int T)
{
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = rand();
        cout << arr[i] << " ";
    }
    rec(0);
    cout << "\n";
    for (int i = 0; i < ans1.size(); i++)
    {
        cout << ans1[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " ";
    }
    cout << "\n";
    cout << Mdiff << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}
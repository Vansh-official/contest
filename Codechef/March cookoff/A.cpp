#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

void solve()
{
    long long w1,w2,x1,x2,m;
    cin>>w1>>w2>>x1>>x2>>m;
    x1*=m;
    x2*=m;
    if(w2-w1>=x1&&w2-w1<=x2) cout<<1<<endl;
    else cout<<0<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
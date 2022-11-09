#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>

using namespace std;

void solve(int T)
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    bool cond=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=i+1;
        if(a[i]!=b[i])
        {
            cond=0;
        }
    }
    if(cond)
    {
        cout<<0<<"\n";
        return;
    }
    if(a[0]==b[0]||a[n-1]==b[n-1])
    {
        cout<<1<<"\n";
        return;
    }
    if(a[0]==b[n-1]&&a[n-1]==b[0])
    {
        cout<<3<<"\n";
        return;
    }
    cout<<2<<"\n";
    return;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
}
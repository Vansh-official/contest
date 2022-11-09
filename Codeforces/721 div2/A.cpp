#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<numeric>

using namespace std;

int p[32];

void solve(int T)
{
    int n;
    cin>>n;
    int i;
    for(i=0;i<32&&p[i]<=n;i++);
    cout<<p[i-1]-1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    p[0]=1;
    for(int i=1;i<32;i++)
    {
        p[i]=2*p[i-1];
    }

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}
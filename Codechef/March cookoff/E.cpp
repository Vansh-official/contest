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
    long long n,m,k;
    cin>>n>>m>>k;
    long long x=0;
    for(long long i=1;i<=min(n,m);i++)
    {
        x=x^(k+i+i);
    }
    if(abs(m-n)==1)
    {
        for(long long i=1;i<=min(m,n);i++)
        {
            x=x^(max(m,n)+i+k);
        }
    }
    else if(n<m||m<n)
    {
        x=x^(1+min(n,m)+1+k);
        x=x^(k+n+m);
    }
    cout<<x<<endl;
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
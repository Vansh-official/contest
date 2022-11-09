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

void solve(int T)
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr(m+n);
    for(int i=0;i<n+m;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        arr[x-1]++;
    }
    int ans=0;
    vector<bool> print(n);
    for(int i=0;i<n;i++)
    {
        print[i]=0;
        if(arr[i]>1)
        {
            ans++;
            print[i]=1;
        }
    }
    cout<<ans<<" ";

    for(int i=0;i<n;i++)
    {
        if(print[i])
        {
            cout<<i+1<<" ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}
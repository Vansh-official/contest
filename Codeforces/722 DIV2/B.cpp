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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans=0,i=0,zc=0;
    while(i<n&&arr[i]<=0)
    {
        i++;
        ans++;
        if(arr[i]==0)
        {
            zc++;
        }
    }
    if(ans==0)
    {
        cout<<1;
        return;
    }
    if(ans==n)
    {
        cout<<ans;
        return;
    }
    bool cond=1;
    for(int j=0;j<i-1;j++)
    {
        if(abs(arr[j]-arr[j+1])<arr[i])
        {
            cond=0;
            break;
        }
    }
    if(cond)
    {
        ans++;
    }
    cout<<ans;
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
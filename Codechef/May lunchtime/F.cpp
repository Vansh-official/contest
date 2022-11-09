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
#include<cstring>

using namespace std;

void solve(int T)
{
    int n,k;
    cin>>n>>k;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long ans=0; 
    int zc=0;
    vector<long long> b(n);
    for(int i=0;i<n;i++)
    {
        ans=max(ans+arr[i],(long long)0);
        b[i]=ans;
        if(arr[i]==0)
        {
            zc++;
        }
    }  
    for(int i=0;i<n;i++)
    {
        ans=max(ans,b[i]);
    }
    if(ans==0&&zc==0)
    {
        ans=arr[0];
        for(int i=1;i<n;i++)
        {
            ans=max(ans,arr[i]);
        }
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
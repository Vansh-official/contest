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

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve(int T)
{
    int n,k,f;
    cin>>n>>k>>f;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr.begin(),arr.end());

    int ans=0,c=0,x=0;
    for(int i=0;i<n;i++)
    {
        x=arr[i].first-c;
        if(x>=0)
        {
            ans+=x;
        }
        c=max(arr[i].second,c);
    }
    x=f-c;
    if(x>0)
    {
        ans+=x;
    }
    if(ans>=k)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
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
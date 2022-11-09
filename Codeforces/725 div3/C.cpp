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

int arr[200001];
int n,l,r;

long long bs(int s,int e,int x)
{
    long long left=-1,right=-1;
    int p=s,q=e;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]+x>=l)
        {
            left=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    s=p,e=q;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]+x<=r)
        {
            right=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    if(left==-1||right==-1)
    {
        return 0;
    }
    return right-left+1;
}

void solve(int T)
{
    cin>>n>>l>>r;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    long long ans=0;

    for(int i=0;i<n;i++)
    {
        ans +=bs(i+1,n-1,arr[i]);
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
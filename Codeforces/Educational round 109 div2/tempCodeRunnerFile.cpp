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
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            int ind,d=1000000007;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(arr[j]==0&&abs(i-j)<d)
                {
                    ind=j;
                    d=abs(i-j);
                }
            }
            ans+=(long long)d;
            arr[i]=arr[ind]=-1;
        }
    }
    cout<<ans<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
}
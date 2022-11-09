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
    vector<long long> arr(n);
    long long total=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    if(total%n)
    {
        cout<<-1;
        return;
    }
    int ans=0;
    long long x=total/n;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            ans++;
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
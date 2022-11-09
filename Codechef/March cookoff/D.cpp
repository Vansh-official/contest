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
    int n,k;
    cin>>n>>k;
    vector<long long> arr(n),sum(n);
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        x+=arr[i];
        sum[i]=x;
    }
    long long cost=0;
    int mini=0,minj=k-1;
    long long minsum=sum[k-1];
    for(int i=1,j=k;j<n;i++,j++)
    {
        if(sum[j]-sum[i-1]<minsum)
        {
            mini=i;
            minj=j;
            minsum=sum[j]-sum[i-1];
        }
    }
    cost=minsum*(minsum+1);
    cost/=2;
    cout<<cost+sum[n-1]-minsum<<endl;
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
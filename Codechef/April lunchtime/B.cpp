#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>
using namespace std;

long long mod(long long a, long long b) {
    long long int ret = a % b;
    if (ret < 0)
        ret += b;
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long m=1000000007;
    int n;
    cin>>n;
    vector<long long> arr(n);
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans+=arr[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        ans*=2;
        ans=mod(ans,m);
        cout<<ans<<"\n";
    }
}
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while(t--)
    {
        int n,x;
        cin>>n;
        vector<int> a(n);
        vector<pair<int,int>> b(n);
        for(int i=0;i<n;i++)
        {
            a[i]=0;
            b[i].second=0;
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a[x-1]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i].first;
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            b[x-1].second++;
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=((long long)b[i].second*a[b[i].first-1]);
        }
        cout<<ans<<"\n";
    }
}
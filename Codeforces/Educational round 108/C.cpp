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

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> arr(n);
        long long total=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].second;
            total+=arr[i].second;
        }
        vector<long long> ans(n),pre(n);
        sort(arr.begin(),arr.end(),sortbysec);
        sort(arr.begin(),arr.end());
        total=0;
        for(int i=0;i<n;i++)
        {
            ans[i]=0;
            total+=arr[i].second;
            pre[i]=total;
        }
        for(int i=0;i<n;i++)
        {
            total=arr[i].second;
            int ind=i;
            int l=1;
            while(i<n-1&&arr[i].first==arr[i+1].first)
            {
                i++;
                l++;
                total+=arr[i].second;
            }
            int j=1;
            while(j<=n&&j<=l)
            {            
                long long temp=total;
                int z=l%j;
                if(z)
                {
                    z--;
                    if(ind==0)
                    {
                        temp-=pre[z];
                    }
                    else
                    {
                        temp-=(pre[ind+z]-pre[ind-1]);
                    }
                }
                ans[j-1]+=temp;
                j++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }    
}
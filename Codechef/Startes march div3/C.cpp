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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> arr(m+n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
            arr[i].second=1;
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr[n+i].first;
            arr[n+i].second=0;
        }
        sort(arr.begin(),arr.end());
        long long count=0;
        int cur=1;
        for(int i=0;i<m+n;i++)
        {
            if(arr[i].second!=cur)
            {
                count++;
                cur=arr[i].second;
            }
        }
        cout<<count<<endl;
    }
}
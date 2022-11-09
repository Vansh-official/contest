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
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
    sort(arr.begin(),arr.end());
    long long ans=0;
    int i=0;
    for(;i<n;i++)
    {
        int x=arr[i].first,count0=0,count=1;
        if(arr[i].second==0) count0++;
        while(i<n-1&&arr[i+1].first==arr[i].first)
        {
            if(arr[i+1].second==0) count0++;
            count++;
            i++;
        }
        if(count0>count-count0) ans-=(x*count0);
        else ans+=(x*(count-count0));
    }
    cout<<ans<<endl;
}
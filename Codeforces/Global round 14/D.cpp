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
        int n,l,r;
        cin>>n>>l>>r;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
            if(i+1<=l)
            {
                arr[i].second=0;
            }
            else{
                arr[i].second=1;
            }
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int ind=i,x=0;
            while(i<n-1&&arr[i+1].first==arr[i].first)
            {
                if(arr[i].second==0)
                {
                    x++;
                }
                i++;
            }
            int l=i-ind+1;
            ans+=min(x,l-x);
            if(x==l-x)
            {
                
            }
        }
    }
}
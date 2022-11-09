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
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n==1) 
        {
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        for(int i=n-1;i>0;i--)
        {
            if(arr[i]<arr[i-1]&&arr[i-1]>x)
            {
                arr[i-1]=x;
                ans++;
            }
        }
        bool cond=1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                cond=0;
                break;
            }
        }
        if(cond) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}
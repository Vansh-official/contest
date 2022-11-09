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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum==x)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        sort(arr.begin(),arr.end());
        int cur=0;
        for(int i=0;i<n;i++)
        {
            cur+=arr[i];
            if(cur==x)
            {
                cout<<arr[i+1]<<" "<<arr[i]<<" ";
                i++;
            }
            else
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<"\n";
    }
}
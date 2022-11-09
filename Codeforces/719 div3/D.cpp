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
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i]-=(i+1);
        }
        long long count=0;
        sort(arr.begin(),arr.end());
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            count=1;
            while(i<n-1&&arr[i]==arr[i+1])
            {
                count++;
                i++;
            }
            count=count*(count-1)/2;
            ans+=count;
        }
        cout<<ans<<"\n";
    }
}
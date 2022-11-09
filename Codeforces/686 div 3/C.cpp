#include<iostream>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> v(n+1,1);  
        n=unique(arr.begin(),arr.end())-arr.begin();  
        arr.resize(n);    
        for(int i=0;i<n;i++)
        {
            v[arr[i]]++;
        }
        v[arr[0]]--;
        v[arr[n-1]]--;
        int ans=1e9;
        for(int i=0;i<n;i++)
        {
            ans=min(ans,v[arr[i]]);
        }
        cout<<ans<<endl;
        cout<<endl;
    }
}
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<numeric>

using namespace std;

void solve(int T)
{
    int n,k;
    cin>>n>>k;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    sort(arr.begin(),arr.end());
    long long x=0,y=0;
    int i=n-1,j=n-2;
    while(k--)
    {
        x+=arr[i];
        y+=arr[j];
        if(k==0)
        {
            y+=arr[j-1];
        }
        i-=2;
        j-=2;
    }
    cout<<max(x,y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}
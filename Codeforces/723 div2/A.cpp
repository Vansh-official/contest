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
    int n;
    cin>>n;
    vector<long long> arr(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0,j=2*n-1,t=1;t<=2*n;)
    {
        if(t%2)
        {
            cout<<arr[j--]<<" ";
        }
        else
        {
            cout<<arr[i++]<<" ";
        }
        t++;
    }
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
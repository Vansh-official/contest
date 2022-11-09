#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>

using namespace std;

void solve(int T)
{
    vector<int> arr(4);
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    int x=max(arr[0],arr[1]),y=max(arr[2],arr[3]);
    sort(arr.begin(),arr.end());
    if(y<x)
    {
        swap(x,y);
    }
    if(arr[2]==x&&arr[3]==y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
        cout<<"\n";
    }
}
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
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=0,b=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[a])
        {
            a=i;
        }
        if(arr[i]<arr[b])
        {
            b=i;
        }
    }
    if(a<b)
    {
        swap(a,b);
    }
    a++;
    b++;
    int x=a;
    x=min(n-b+1,x);
    x=min(x,n-a+b+1);
    cout<<x;
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
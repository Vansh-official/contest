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
#include<queue>

using namespace std;

void solve(int T)
{
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    long long cur=0,count=0;
    priority_queue<long long, vector<long long>, greater<long long> > q;
    
    int i=0;
    while(i<n&&arr[i]<0)
    {
        i++;
    }

    while(i<n)
    {
        if(arr[i]<0)
        {
            q.push(arr[i]);
        }
        cur+=arr[i];
        count++;
        while(cur<0)
        {
            cur-=q.top();
            q.pop();
            count--;
        }
        i++;
    }

    cout<<count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}
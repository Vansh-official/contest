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
    int k;
    cin>>k;
    int n=100-k;
    for(int i=2;i<=100;i++)
    {
        while(n%i==0&&k%i==0)
        {
            n/=i;
            k/=i;
        }
    }
    cout<<n+k<<"\n";
    return;
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
    }
}
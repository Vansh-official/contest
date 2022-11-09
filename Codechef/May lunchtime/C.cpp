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
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    int f=abs(a-c)+abs(b-d);
    int ans=k-f;
    if(ans>=0&&ans%2==0)
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
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}
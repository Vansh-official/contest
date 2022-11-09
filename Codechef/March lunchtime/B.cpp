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
        long long x,r,m;
        cin>>x>>r>>m;
        r*=60;
        m*=60;
        if(m<r)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(x>=r)
        {
            cout<<"YES"<<endl;
            continue;
        }
        long long cur=x-1;
        r-=cur;
        m-=cur;
        long long f=m/2;
        if(m%2) f++;
        r-=f;
        if(r<=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
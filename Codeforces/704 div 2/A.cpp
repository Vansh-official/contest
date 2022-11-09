#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long p,a,b,c;
        cin>>p>>a>>b>>c;
        long long x=p/a;
        long long y=p/b;
        long long z=p/c;
        x*=a;
        if(p%a)
        {
            x+=a;
        }
        y*=b;
        if(p%b)
        {
            y+=b;
        }
        z*=c;
        if(p%c)
        {
            z+=c;
        }
        long long ans=min(x-p,y-p);
        if(ans<0)
        {
            ans=max(x-p,y-p);
        }
        ans=min(ans,z-p);
        if(ans<0)
        {
            ans=max(ans,z-p);
        }
        cout<<ans<<endl;
    }
}
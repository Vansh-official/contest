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
        int n;
        cin>>n;
        int count=0,x=n;
        while(x)
        {
            count++;
            x/=10;
        }
        count--;
        int ans=count*9;
        x=0;
        //cout<<count<<" "<<" "<<ans<<"\n";
        count++;
        while(count--)
        {
            x=x*10+1;
        }
        int y=x;
        //cout<<count<<" "<<y<<" "<<ans<<"\n";
        while(x<=n)
        {
            ans++;
            x+=y;
        }
        cout<<ans<<"\n";
    }
}
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
        long long r,c,d;
        cin>>r>>c>>d;
        if(abs(r-c)<=min(r,c)*d)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }    
}
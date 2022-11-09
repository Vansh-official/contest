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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if((a*(b+1))%(a*b)==0||a%(a*b)==0)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        cout<<a*b<<" "<<a<<" "<<a*(b+1)<<"\n";
    }
}
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
        long long n;
        cin>>n;
        if(n%2)
        {
            cout<<"NO\n";
            continue;
        }
        n/=2;
        long long x=sqrt(n);
        if(x*x==n)
        {
            cout<<"YES\n";
            continue;
        }
        if(n%2)
        {
            cout<<"NO\n";
            continue;
        }
        n/=2;
        x=sqrt(n);
        if(x*x==n)
        {
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
}
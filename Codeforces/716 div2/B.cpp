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

void solve(int t){
    long long n,k;
    cin>>n>>k;
    long long ans=1;
    long long m=1000000007;
    while(k--){
        ans=(ans*n)%m;
    }
    cout<<ans<<endl;
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
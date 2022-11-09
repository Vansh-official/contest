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

void solve(){
    long long n;
    cin>>n;
    long long ans=0;
    if(n==0||n%2050!=0){
        cout<<-1<<endl;
        return;
    }
    n/=2050;
    while(n){
        ans+=(n%10);
        n/=10;
    }
    cout<<ans<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
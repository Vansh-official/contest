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
    int n;
    string s;
    cin>>n>>s;
    vector<int> ans(n);
    ans[0]=1;
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1];
        if(s[i]>s[i-1]){
            ans[i]++;
        }
        else{
            ans[i]=1;
        }
    }
    cout<<"Case #"<<t<<": ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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
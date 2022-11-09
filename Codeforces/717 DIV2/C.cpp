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
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool cond=0;
    vector<vector<long long>> vec( n , vector<long long> (n));
    for(int i=0;i<n-1;i++){
        long long x=arr[i];
        vec[i][i]=x;
        for(int j=i+1;j<n;j++){
            x^=arr[j];
            vec[j][i]=x;
        }
    }
    if(vec[n-1][0]==0){
        cout<<"YES\n";
        return;
    }
    vec[n-1][n-1]=arr[n-1];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(vec[j][i+1]==vec[n-1][j+1]&&vec[i][0]==vec[n-1][j+1]){
                cond=1;
                break;
            }
        }
        if(cond){
            break;
        }
    }
    if(cond){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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
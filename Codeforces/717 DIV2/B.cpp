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
    long long a=arr[0];
    for(int i=1;i<n;i++){
        a^=arr[i];
    }
    if(a==0){
        cout<<"YES\n";
        return;
    }
    vector<vector<long long>> vec( n , vector<long long> (n));
    for(int i=0;i<n-1;i++){
        long long x=arr[i];
        vec[i][i]=x;
        for(int j=i+1;j<n;j++){
            x^=arr[j];
            vec[j][i]=x;
        }
    }
    vec[n-1][n-1]=arr[n-1];
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    for(int i=0;i<n-2;i++){
        for(int j=i+2;j<n;j++){
            if(vec[i][0]==vec[n-1][j]&&vec[i][0]==a){
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
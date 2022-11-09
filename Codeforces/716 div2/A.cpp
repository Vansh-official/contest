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
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool cond=0;
    for(int i=0;i<n;i++){
        int x=sqrt(arr[i]);
        if(x*x!=arr[i]){
            cond=1;
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
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }        
}
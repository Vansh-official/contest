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

void print(int ans,int t){
    cout<<"Case #"<<t<<": "<<ans<<endl;
}

void solve(int t){
    int ans=2;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==2||n==3){
        print(n,t);
        return;
    }
    for(int i=0;i<n;i++){
        int x=arr[i];
        if(i<n-2){
            arr[i]=arr[i+1]-arr[i+2]+arr[i+1];
        }
        int l=2;
        for(int i=1;i<n-1;i++){
            if(arr[i+1]-arr[i]==arr[i]-arr[i-1]){
                l++;
            }
            else{
                l=2;
            }
            ans=max(l,ans);
        }
        arr[i]=x;
        if(i>1){
            arr[i]=arr[i-1]+arr[i-1]-arr[i-2];
        }
        l=2;
        for(int i=1;i<n-1;i++){
            if(arr[i+1]-arr[i]==arr[i]-arr[i-1]){
                l++;
            }
            else{
                l=2;
            }
            ans=max(l,ans);
        }
        arr[i]=x;
    }
    print(ans,t);
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
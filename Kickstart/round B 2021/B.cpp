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

    for(int i=1;i<n;i++){
        int l=2,p=arr[i]-arr[i-1];
        bool x=0;
        int ind=-1;
        while(i<n-1){
            if(i<n-1&&arr[i+1]-arr[i]==p){
                i++;
                l++;
            }
            else if(!x&&i<n-2&&arr[i+2]-arr[i]==2*p){
                ind=i;
                x=1;
                i+=2;
                l+=2;
            }
            else{
                break;
            }
        }
        if(ind!=-1){
            i=ind;
        }
        ans=max(ans,l);
    }
    int l=2,maxl=2;
    for(int i=1;i<n-1;i++){
        if(arr[i+1]-arr[i]==arr[i]-arr[i-1]){
            l++;
        }
        else{
            l=2;
        }
        maxl=max(l,maxl);
    }
    ans=max(maxl,ans);
    if(maxl<n){
        ans=max(maxl+1,ans);
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
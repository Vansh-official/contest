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
int n,arr[505];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>n>>x;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        
        bool done=true;
        for(int i=0;i<n-1;i++) {
            if(arr[i]<=arr[i+1]) {
                continue;
            }
            done=false;
        }
        
        if(done) {
            cout<<"0\n";
            continue;
        }
        
        vector<int> vec(n+1);
        for(int i=0;i<n;i++) {
            vec[i]=arr[i];
        }
        vec[n]=x;
        sort(vec.begin(),vec.end());
        
        int ans=10000;
        
        for(int i=1;i<n+1;i++) {
            int cnt[505];
            for(int j=0;j<505;j++) {
                cnt[j]=0;
            }

            for(int j1=0,j2=0;j2<n+1;j2++) {
                if(j2==i) {
                    continue;
                }

                if(arr[j1]!=vec[j2]) {
                    cnt[arr[j1]]++;
                }

                j1++;
            }
            
            int fin=0;
            // cout<<i<<"\n";
            for(int j=0;j<505;j++) {
                // cout<<cnt[j]<<" ";
                if(cnt[j]==0) {
                    continue;
                }

                if(cnt[j]>1) {
                    fin=10000;
                    break;
                }
                
                if(j<=x) {
                    fin=10000;
                    break;
                }
                else {
                    fin+=cnt[j];
                }
            }
            // cout<<"\n";

            ans=min(ans,fin);
            // cout<<"fin="<<fin<<"\n";
        }
        if(ans==10000) {
            ans=-1;
        }
        cout<<ans<<"\n";
    }
    
}
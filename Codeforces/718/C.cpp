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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr( n , vector<int> (m));
    vector<pair<int,pair<int,int>>> vec(n+m);
    int ind =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            vec[ind].first=arr[i][j];
            vec[ind].second.first=i;
            vec[ind++].second.second=j;
        }
    }    
    sort(vec.begin(),vec.end());
    vector<int> p(m);
    for(int i=0;i<m;i++){
        p[i]=0;
    }
    for(int i=0;i<m;i++){
        p[vec[i].second.second]++;
    }
    for(int i=0;i<m;i++){
        if(p[vec[i].second.second]==1){
            continue;
        }
        
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
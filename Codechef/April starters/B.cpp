#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<vector<char>> arr( n , vector<char> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        } 
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int full=0,partial=0;
            for(int j=0;j<m;j++){
                if(arr[i][j]=='P'){
                    partial++;
                }
                else if(arr[i][j]=='F'){
                    full++;
                }
            }
            if(full>=x){
                ans[i]=1;
            }
            else if(full>=x-1&&partial==y){
                ans[i]=1;
            }
            else{
                ans[i]=0;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i];
        }
        cout<<"\n";
    }
}
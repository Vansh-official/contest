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
    int ans[500001];
    while (t--)
    {
        for(int i=0;i<500001;i++){
            ans[i]=0;
        }
        int n,m;
        cin>>n>>m;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int last=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='0'){
                    continue;
                }
                int x=0,y=0;
                if(i>0){
                    x=arr[i-1][j]-'0';
                }
                if(j>0){
                    y=arr[i][j-1]-'0';
                }
                if(x&&!y){
                    arr[i][j]=x+'0';
                }
                else if(!x&&y){
                    arr[i][j]=y+'0';
                }
                else if(x&&y){
                    if(ans[x-1]<ans[y-1]){
                        x=y;
                    }
                    arr[i][j]=x+'0';
                }
                else{
                    last++;
                    arr[i][j]=last+'0';
                }
                ans[arr[i][j]-'0'-1]++;
            }
        }
        sort(ans,ans+last);
        int xd=0;
        for(int i=last-2;i>=0;i-=2){
            xd+=ans[i];
        }
        cout<<xd<<"\n";
    }
}
#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<cmath>
#include<set>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            arr[i]=make_pair(a,b);
        }
        bool f=false;
        for(int i=0;i<n;i++)
        {
            bool cond=true;
            for(int j=0;j<n;j++)
            {
               int x=abs(arr[i].first-arr[j].first);
               int y=abs(arr[i].second-arr[j].second);  
               int d=x+y;
               if(d>k)
               {
                   cond=false;
                   break;
               }                 
            }
            if(cond)
            {
                cout<<1<<endl;
                f=true;
                break;
            }
        }
        if(!f)
        {
            cout<<-1<<endl;
        }
    }
}
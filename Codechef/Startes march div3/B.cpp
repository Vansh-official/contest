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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       vector<int> arr(m+1);
       for(int i=0;i<m+1;i++) arr[i]=0;
       for(int i=0;i<n;i++)
       {
           int a;
           cin>>a;
           arr[a]++;
       }
       bool cond=0;
       for(int i=1;i<m;i++)
       {
           if(arr[i]==0)
           {
               cond=1;
               break;
           }
       }
       if(cond) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
}
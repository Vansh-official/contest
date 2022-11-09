#include<iostream>
#include<algorithm>
#include<utility>
#include<map>
#include<set>
#include<math.h>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,k;
        cin>>n>>p>>k;
        string s;
        cin>>s;
        int x,y;
        cin>>x>>y;
        int cost=0;
        for(int i=p-1;i<n;i+=k)
        {
            if(s[i]=='1')
            {
                continue;
            }
            else
            {
                int j=i;
                while(j<n&&s[j]!='1')
                {
                    j++;
                }
                if(j*y>x)
                {
                    cost+=x;
                }
                else
                {
                    cost+=(j*y);
                    i=j;
                }      
                cout<<i<<" "<<j<<" "<<cost<<endl;
            }      
        }
        cout<<cost<<endl;
    }
}
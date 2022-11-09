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
    int n,t,k;
    cin>>n>>t>>k;
    int ans=-1,l=1,r=n,x;
    while(1)
    {
        if(l==r&&k==1)
        {
            cout<<l<<"\n";
            cout.flush();
            break;
        }
        int y=l+(r-l)/2;
        cout<<"? "<<l<<" "<<y<<"\n";
        cin>>x;
        x=(y-l+1)-x;
        if(x>k)
        {
            r=y-1;
            continue;
        }
        if(x==k)
        {
            r=y;
            continue;
        }
        if(x<k)
        {
            k-=x;
            l=y+1;
            continue;
        }
    }
}
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
        int n,m,k;
        cin>>n>>m>>k;
        int cost=0;
        int i=1,j=1;
        while(i<n)
        {
            cost+=j;
            i++;
        }
        while(j<m)
        {
            cost+=i;
            j++;
        }
        if(cost==k)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
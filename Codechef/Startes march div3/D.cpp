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
        int n,k;
        cin>>n>>k;
        int x=n/k;
        if(n%k) 
        {
            cout<<x+1<<" "<<n%k<<endl;
        }
        else
        {
            cout<<x<<" "<<k<<endl;
        }
    }
}
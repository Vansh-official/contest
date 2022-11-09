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
        long long a,y,x;
        cin>>a>>y>>x;
        long long sum=0;
        if(a==0)
        {
            cout<<1<<endl;
            continue;
        }
        sum=pow(x+1,a);
        if(a==y) sum--;
        cout<<sum<<endl;
    }
}
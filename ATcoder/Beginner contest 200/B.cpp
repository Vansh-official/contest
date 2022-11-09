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
    int n;
    double d,h;
    cin>>n>>d>>h;
    vector<pair<double,double>> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    double ans=0,ev=h/d;
    for(int i=0;i<n;i++)
    {
        double p=arr[i].second/arr[i].first;
        if(p>ev)
        {
            p=(h-arr[i].second)/(d-arr[i].first);
            p*=d;
            ans=max(ans,h-p);
        }
    }
    cout<<ans<<"\n";
}
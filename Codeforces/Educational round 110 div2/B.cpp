#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
  

void solve(int T)
{
    int n,x;
    cin>>n;
    vector<int> odd,even;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2)
        {
            odd.push_back(x);
        }
        else
        {
            even.push_back(x);
        }
    }
    vector<int> ans;
    for(auto itr:even)
    {
        ans.push_back(itr);
    }
    for(auto itr:odd)
    {
        ans.push_back(itr);
    }
    x=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(gcd(ans[i],2*ans[j])>1)
            {
                x++;
            }
        }
    }
    cout<<x;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
        cout<<"\n";
    }
}
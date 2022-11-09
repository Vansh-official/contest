#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<numeric>

using namespace std;

void solve(int T)
{
    int x;
    cin>>x;

    if(x<11)
    {
        cout<<"NO";
        return;
    }

    if(x%11==0)
    {
        cout<<"YES";
        return;
    }
    int t=x;
    int l=0,d=2;
    vector<int> arr;
    while(t)
    {
        arr.push_back(t%10);
        l++;
        t/=10;
    }

    for(int i=l-2;i>=0;i--)
    {
        arr[i]=max(arr[i],arr[i+1]);
    }

    t=x%100;

    while(d<l)
    {

        if(t%11==0&&t/11>=arr[d])
        {
            cout<<"YES";
            return;
        }

        d++;
    }

    cout<<"NO";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}
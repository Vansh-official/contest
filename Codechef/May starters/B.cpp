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
    int k;
    cin>>k;
    vector<string> arr(k);
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }

    int c=0;
    bool cond=1;
    for(int i=0;i<k;i++)
    {
        if(arr[i][0]>=97&&arr[i][0]<=109)
        {
            c=0;
        }
        else if(arr[i][0]>=78&&arr[i][0]<=90)
        {
            c=1;
        }
        else
        {
            cond=0;
            break;
        }
        for(int j=1;j<arr[i].length();j++)
        {
            int d;
            if(arr[i][j]>=97&&arr[i][j]<=109)
            {
                d=0;
            }
            else
            {
                d=1;
            }
            if(c!=d)
            {
                cond=0;
                break;
            }
        }
    }
    if(cond)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
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
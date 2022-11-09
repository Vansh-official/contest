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
    int n;
    string s;
    cin>>n>>s;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            c++;
        }
    }
    if(c)
    {
        if(c>1&&n%2&&s[n/2]=='0')
        {
            cout<<"ALICE";
        }
        else
        {
            cout<<"BOB";
        }
    }
    else
    {
        cout<<"DRAW";
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
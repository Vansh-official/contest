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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int x;
    int d=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            d+=2;
        }
        else
        {
            d+=1;
        }
    }
    while(k--)
    {
        cin>>x;
        x--;
        if(s[x]=='1')
        {
            s[x]='0';
        }
        else
        {
            s[x]='1';
        }
        int diff=0;
        if(x>0)
        {
            if(s[x]==s[x-1])
            {
                d++;
            }
            else
            {
                d--;
            }
        }
        if(x<n-1)
        {
            if(s[x]==s[x+1])
            {
                d++;
            }
            else
            {
                d--;
            }
        }
        cout<<d<<"\n";
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
    }
}
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

void solve(int T)
{
    int n;
    string s;
    cin>>s;
    n=s.length();
    long long ans=0,len=1;
    int last=-1,i=1;
    char ch;
    if(s[0]=='0')
    {
        ch='1';
    }
    else if(s[0]=='1')
    {
        ch='0';
    }
    else
    {
        last=0;
        while(i<n&&s[i]=='?')
        {
            i++;
            len++;
        }
        if(i==n||i==n-1)
        {
            cout<<((long long)n*(n+1)/2);
            return;
        }
        i++;
        len++;
        if(s[i-1]=='0')
        {
            ch='1';
        }
        else
        {
            ch='0';
        }
    }
    for(;i<n;i++)
    {
        if(s[i]==ch)
        {
            if(ch=='0')
            {
                ch='1';
            }
            else
            {
                ch='0';
            }
            len++;
        }
        else if(s[i]=='?')
        {
            if(ch=='0')
            {
                ch='1';
            }
            else
            {
                ch='0';
            }
            len++;
            if(s[i-1]!='?')
            {
                last=i;
            }
        }
        else 
        {
            ans+=(len*(len+1)/2);
            len=1;
            if(s[i-1]=='?')
            {
                long long x=i-last;
                len+=x;
                ans-=(x*(x+1)/2);
            }
            if(s[i]=='0')
            {
                ch='1';
            }
            else
            {
                ch='0';
            }
        }
    }
    ans+=(len*(len+1))/2;
    cout<<ans;
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
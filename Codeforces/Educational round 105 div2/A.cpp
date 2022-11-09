#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin>>s;
        n=s.length();
        if(s[0]==s[n-1])
        {
            cout<<"NO"<<endl;
            continue;
        }
        char c=s[0],d,e;
        if(c=='A')
        {
            d='B';
            e='C';
        }
        else if(c=='B')
        {
            d='A';
            e='C';
        }
        else
        {
            d='A';
            e='B';
        }
        int cc=0,dc=0,ec=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
            {
                s[i]='{';
                cc++;
            }
            else if(s[i]==d)
            {
                dc++;
            }
            else
            {
                ec++;
            }
        }
        int x=0;
        if(cc==n/2)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='{')
                {
                    x++;
                }
                else
                {
                    x--;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='{')
                {
                    x++;
                }
                if(dc>ec)
                {
                    if(s[i]==d)
                    {
                        x--;
                    }
                    else if(s[i]==e)
                    {
                        x++;
                    }
                }
                else
                {
                    if(s[i]==d)
                    {
                        x--;
                    }
                    else if(s[i]==e)
                    {
                        x--;
                    }
                }
            }
        }
        if(x==0)
        {
             cout<<"YES"<<endl;
        }
        else
        {
              cout<<"NO"<<endl;
        }
    }
}
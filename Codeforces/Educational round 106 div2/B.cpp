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
        cin>>s;
        int n=s.length();
        bool flag=true;
        int zc=0,prev=-1;
        for(int i=0;i<n;i++) if(s[i]=='0')zc++;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(zc=0)
                {
                    break;
                }
                if(i==0)
                {
                    prev=0;
                    continue;
                }
                if()
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
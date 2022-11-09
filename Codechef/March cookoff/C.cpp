#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<string.h>
#include<algorithm>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s.substr(i,5)=="party")
        {
            cout<<"pawri";
            i+=4;
        }
        else
        {
            cout<<s[i];
        }
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
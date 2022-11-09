#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<set>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag = false;
        if(n<4)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(s=="2020")
        {
            cout<<"YES"<<endl;
        }
        else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(s[n-1]=='0'&&s[n-2]=='2'&&s[n-3]=='0'&&s[n-4]=='2')
        {
            cout<<"YES"<<endl;
        }
        else if(s[0]=='2'&&s[n-1]=='0'&&s[n-2]=='2'&&s[n-3]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(s[0]=='2'&&s[1]=='0'&&s[n-1]=='0'&&s[n-2]=='2')
        {
            cout<<"YES"<<endl;
        }
        else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[n-1]=='0')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
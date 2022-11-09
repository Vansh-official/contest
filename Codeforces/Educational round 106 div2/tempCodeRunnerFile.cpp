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
        for(int i=0;i<n-3;i++)
        {
            if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='0')
            {
                flag=0;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
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
        int n;
        cin>>n;
        string s,p;
        cin>>s>>p;
        int zc=0,oc=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0'&&p[i]=='1')
            {
                zc++;
            } 
            if(s[i]=='1'&&p[i]=='0')
            {
                oc++;
            }
        }
        if(zc==oc)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }        
    }
}
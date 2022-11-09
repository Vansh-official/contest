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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        double at=120-n;
        double d=120;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                at++;
            }
        }
        if((double)(at/d)>=0.75)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }        
    }
}
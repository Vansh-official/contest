#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<cmath>
#include<set>
#include<string>
#include<algorithm>
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
        string s;
        int n;
        cin>>n>>s;
        int fr[26];
        for(int i=0;i<26;i++)
        {
            fr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            fr[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            while(fr[i]>0)
            {
                cout<<char('a'+i);
                fr[i]--;
            }
        }
        cout<<endl;
    }
}
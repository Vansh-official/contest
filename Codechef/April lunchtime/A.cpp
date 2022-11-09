#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
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
        string s;
        cin>>n>>s;
        int count=0,len=0;
        bool cond=0;
        for(int i=0;i<n;i++)
        {
            len++;
            if(s[i]=='1')
            {
                count++;
            }
            if(len%2==0)
            {
                if(count>=len/2)
                {
                    cond=1;
                    break;
                }
            }
            else
            {
                if(count>len/2)
                {
                    cond=1;
                    break;
                }
            }
        }
        if(cond)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
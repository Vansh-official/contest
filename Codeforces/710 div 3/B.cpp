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
        int n,k;
        string s;
        cin>>n>>k>>s;
        int count=0,ini=-1,fin=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                s[i]='x';
                ini=i;
                count++;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='*')
            {
                s[i]='x';
                fin=i;
                count++;
                break;
            }
        }
        if(fin==-1||fin-ini<=k)
        {
            cout<<count<<endl;
            continue;
        }
        for(int i=ini+1;i<=fin-k;i++)
        {
            int cur=i,last=i;
            count++;
            while(cur<=i+k-1)
            {
                if(cur==fin)
                {
                    count--;
                    break;
                }
                if(s[cur]=='*') last=cur;
                cur++;
            }
            i=last;
        }
        cout<<count<<endl;
    }
}
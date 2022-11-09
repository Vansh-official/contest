#include<iostream>
#include<string>
#include<string.h>
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
        string a,b;
        cin>>a>>b;
        bool cond=false;
        for(int i=min(a.length(),b.length());i>0;i--)
        {
            for(int j=0;j+i<=a.length();j++)
            {
                for(int k=0;k+i<=b.length();k++)
                {
                    if(a.substr(j,i)==b.substr(k,i))
                    {
                        cout<<a.length()-i+b.length()-i<<endl;
                        cond=1;
                        break;
                    }
                }
                if(cond) break;
            }
            if(cond) break;
        }
        if(!cond) cout<<a.length()+b.length()<<endl;
    }
}
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='6')
            {
                s[i]='9';
            }
            else if(s[i]=='9')
            {
                s[i]='6';
            }
            cout<<s[i];
        }
        cout<<"\n";
    }
}
#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<cmath>
#include<set>
#include<algorithm>
#include<string>
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
        string* s = new string[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(j<=n-3&&s[i][j]=='X'&&s[i][j+1]=='X'&&s[i][j+2]=='X')
               {
                   bool cond=false;
                   if(i<=n-3&&s[i][j]=='X'&&s[i+1][j]=='X'&&s[i+2][j]=='X')
                   {
                       s[i][j]='O';
                       cond=true;
                   }
                   if(i<=n-3&&s[i][j+1]=='X'&&s[i+1][j+1]=='X'&&s[i+2][j+1]=='X')
                   {
                       s[i][j+1]='O';
                       cond=true;
                   }
                   if(i<=n-3&&s[i][j+2]=='X'&&s[i+1][j+2]=='X'&&s[i+2][j+2]=='X')
                   {
                       s[i][j+2]='O';
                       cond=true;
                   }
                   if(!cond)
                   {
                       if(j<=n-5&&s[i][j+3]=='X'&&s[i][j+4]=='X')
                       {
                           s[j+2]='O';
                       }
                       else if(j<=n-4&&s[i][j+3]=='X')
                       {
                           s[j+1]='O';
                       }
                       else
                       {
                           s[i][j]='O';
                       }                       
                   }
               }
               if(i<=n-3&&s[i][j]=='X'&&s[i+1][j]=='X'&&s[i+2][j]=='X')
               {
                   bool cond=false;
                   if(j>=2&&s[i+1][j-2]=='X'&&s[i+1][j-1]=='X'&&s[i+1][j]=='X')
                   {
                       s[i+1][j]='O';
                       cond=true;
                   }
                   if(j>=1&&j<=n-2&&s[i+1][j-1]=='X'&&s[i+1][j]=='X'&&s[i+1][j+1]=='X')
                   {
                       s[i+1][j]='O';
                       cond=true;
                   }
                   if(j<=n-3&&s[i+1][j+2]=='X'&&s[i+1][j]=='X'&&s[i+1][j+1]=='X')
                   {
                       s[i][j]='O';
                       cond=true;
                   }
                   if(j>=2&&s[i+2][j-2]=='X'&&s[i+2][j-1]=='X'&&s[i+2][j]=='X')
                   {
                       s[i+2][j]='O';
                       cond=true;
                   }
                   if(j>=1&&j<=n-2&&s[i+2][j-1]=='X'&&s[i+2][j]=='X'&&s[i+2][j+1]=='X')
                   {
                       s[i+2][j]='O';
                       cond=true;
                   }
                   if(j<=n-3&&s[i+2][j+2]=='X'&&s[i+2][j]=='X'&&s[i+2][j+1]=='X')
                   {
                       s[i+2][j]='O';
                       cond=true;
                   }
                   else if(!cond)
                   {
                       if(i<=n-5&&s[i+3][j]=='X'&&s[i+4][j]=='X')
                       {
                           s[i+2]='O';
                       }
                       else if(i<=n-4&&s[i+3][j]=='X')
                       {
                           s[i+1]='O';
                       }
                       else
                       {
                           s[i][j]='O';
                       }                
                   }
               }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
        }
    }
    return 0;
}
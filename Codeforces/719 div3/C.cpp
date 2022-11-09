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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr( n , vector<int> (n, 0));
        int x=1;
        for(int i=0;i<n;i++)
        {
            arr[i][i]=x++;
        }
        for(int k=1;k<n;k++)
        {
            for(int i=0,j=k;j<n;i++,j++)
            {
                arr[i][j]=x++;
            }
            for(int i=k,j=0;i<n;i++,j++)
            {
                arr[i][j]=x++;
            }
        }
        bool ans=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i<n-1)
                {
                    if(abs(arr[i][j]-arr[i+1][j])==1)
                    {
                        ans=0;
                        break;
                    }
                }
                if(i>0)
                {
                    if(abs(arr[i][j]-arr[i-1][j])==1)
                    {
                        ans=0;
                        break;
                    }
                }
                if(j<n-1)
                {
                    if(abs(arr[i][j]-arr[i][j+1])==1)
                    {
                        ans=0;
                        break;
                    }
                }
                if(j>0)
                {
                    if(abs(arr[i][j]-arr[i][j-1])==1)
                    {
                        ans=0;
                        break;
                    }
                }
            }
            if(!ans)
            {
                break;
            }
        }
        if(!ans)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}
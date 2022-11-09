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
        int n,m;
        cin>>n>>m;
        int** arr=new int*[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=new int[m];
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }   
        int q;
        cin>>q;
        while(q--)
        {
            int x,y,v;
            cin>>x>>y>>v;
            x--;
            y--;
            arr[x][y]=v;
            int z=min(x,y);
            x-=z;
            y-=z;
            bool flag=true;
            while(x<n&&y<m)
            {
                if(arr[x][y]!=v)
                {
                    flag=false;
                    break;
                }
                x++;
                y++;
            }
            if(flag)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }            
        }
    }
}
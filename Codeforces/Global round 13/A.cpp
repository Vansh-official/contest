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
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    int zc=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(!arr[i])
        {
            zc++;
        }
    }
    while(q--)
    {
        int t;
        cin>>t;
        int p;
        cin>>p;
        if(t==1)
        {
            if(arr[p-1]==0)
            {
                arr[p-1]=1;
                zc--;
            }
            else
            {
                zc++;
                arr[p-1]=0;
            }
        }
        else
        {
            if(n-zc>=p)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
}
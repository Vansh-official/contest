#include<iostream>
#include<algorithm>
#include<utility>
#include<map>
#include<set>
#include<math.h>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int* arr=new int[n];
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            auto itr=m.find(arr[i]);
            if(itr==m.end())
            {
                m.insert({arr[i],1});
            }
            else
            {
                itr->second++;
            }
        }      
        int mday=0;
        for(auto i=m.begin();i!=m.end();i++)
        {
            int d=0;
            int val=i->first;
            for(int p=0;p<n;p++)
            {
                if(arr[p]!=val)
                {
                   p+=k-1;
                   d++;
                }
            }
            if(i==m.begin())
            {
                mday=d;
            }
            else
            {
                mday=min(mday,d);
            }
        }
        cout<<mday<<endl;
    }
}
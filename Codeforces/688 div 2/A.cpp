#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<map>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ct=0;
        vector<int> fr(100);
        for(int i=0;i<100;i++)
        {
            fr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            fr[a-1]++;
        }
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            fr[a-1]++;
        }
        for(int i=0;i<100;i++)
        {
            if(fr[i]>1)
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}
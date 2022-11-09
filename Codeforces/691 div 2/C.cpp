#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<long long> a(n);
    vector<long long> b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++)
    {
        long long x = a[n-1]+b[i];
        int t=1;
        for(int j=n-2;j>=0;j--)
        {
            if(t%2)
            {
                x-=a[j]-b[i];
            }
            else
            {
                x+=a[j]+b[i];
            }
            t++;
        }
        cout<<x<<" ";
    }
    cout<<endl;
}
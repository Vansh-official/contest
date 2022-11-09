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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%m==0)
            {
                count++;
                arr[i]==-1;
            }
        }
        if(count==n)
        {
            cout<<1<<endl;
            continue;
        }
        if(count==n-1)
        {
            cout<<n+1<<endl;
            continue;
        }
        sort(arr.begin(),arr.end());
        int i=0;
        while(arr[i]==-1)i++;
        
    }
}
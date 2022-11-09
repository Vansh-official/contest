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
        string s;
        cin>>n>>s;
        int count=0,l=0;
        long long ans=0;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                arr.push_back(i+1);
                count++;
            }
        }
        if(count==0||count==1||count==n)
        {
            cout<<0<<"\n";
            continue;
        }
        if(count%2==1)
        {
            l=count/2;
            l++;
        }
        else
        {
            l=count/2;
        }
        int x=arr[l-1];
        l=x-l+1;
        for(int i=0;i<arr.size();i++)
        {
            ans+=abs(arr[i]-l);
            l++;
        }
        cout<<ans<<"\n";
    }
}
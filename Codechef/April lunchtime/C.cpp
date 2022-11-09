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
    cin >> t;
    while (t--)
    {
        int n;
        long long w,wr;
        cin>>n>>w>>wr;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }   
        if(wr>=w)
        {
            cout<<"YES\n";
            continue;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(i<n-1&&arr[i]==arr[i+1])
            {
                i++;
                wr+=(2*arr[i]);
            }
        }
        if(wr>=w)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
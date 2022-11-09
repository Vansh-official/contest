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
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        long long count=0;
        count+=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=arr[i+1])
            {
                count+=1+arr[i]-arr[i+1];
            }
        }
        cout<<count<<endl;
    }
}
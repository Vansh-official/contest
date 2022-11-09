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
        int n;
        long long k;
        cin>>n>>k;
        long long sum=0;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%k==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }        
    }
}
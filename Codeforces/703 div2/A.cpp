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
        cin>>n;
        vector<long long> arr(n);
        long long sum=0,check=0;;
        for(int i=0;i<n;i++)   
        {
            cin>>arr[i];
        }
        bool cond=true;;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            check+=i;
            if(sum<check)
            {
                cond=false;
                break;
            }
        }
        if(cond)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
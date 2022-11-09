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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int l=1;
            while(i<n-1&&arr[i+1]==arr[i])
            {
                l++;
                i++;
            }
            if(l%2)
            {
                ans++;
            }
        }      
        cout<<ans<<endl;  
    }
}
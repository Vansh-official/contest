#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>

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
        int ind=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[ind]>arr[i])
            {
                ind=i;
            }
        }
        int x=arr[ind];
        if(!ind)
        {
            cout<<n-1<<"\n";
        }
        else
        {
            cout<<n<<"\n"<<1<<" "<<ind+1<<" "<<x<<" "<<arr[0]<<"\n";
        }
        swap(arr[0],arr[ind]);
        for(int i=2;i<=n;i++)
        {
            cout<<1<<" "<<i<<" "<<x<<" "<<x+i-1<<"\n";
            arr[i-1]=x+i-1;
        }
    }
}
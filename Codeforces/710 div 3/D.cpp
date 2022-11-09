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
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        int x=0;
        if(arr[0]==arr[n-1])
        {
            cout<<n<<endl;
            continue;
        }
        int maxc=0;
        for(int i=0;i<n-1;i++)
        {
            int count=1;
            while(i<n-1&&arr[i+1]==arr[i])
            {
                count++;
                i++;
            }
            maxc=max(maxc,count);
        }
        if(n%2){
            x++;
            maxc--;
        }
        if(maxc>n/2)
        {
            x+=(2*(maxc-(n/2)));
        }
        cout<<x<<endl;
    }
}
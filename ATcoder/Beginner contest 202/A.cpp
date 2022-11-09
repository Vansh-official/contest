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
    t=1;
    while(t--)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        int ans=0;
        for(int i=0;i<3;i++)
        {
            if(arr[i]==1)
            {
                ans+=6;
            }
            if(arr[i]==6)
            {
                ans+=1;
            }
            if(arr[i]==3)
            {
                ans+=4;
            }
            if(arr[i]==4)
            {
                ans+=3;
            }
            if(arr[i]==2)
            {
                ans+=5;
            }
            if(arr[i]==5)
            {
                ans+=2;
            }
        }
        cout<<ans<<"\n";
    }
}
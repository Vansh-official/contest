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
        vector<int> arr(n),mini(n),maxi(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        mini[0]=maxi[0]=arr[0];
        vector<bool> print(200001);
        for(int i=0;i<200001;i++) print[i]=0;
        print[arr[0]]=1;
        int last=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
            {
                mini[i]=arr[i];
                print[arr[i]]=1;
            }
            else
            {
                while(print[last]) last++;
                mini[i]=last;
                print[last]=1;
            }
        }
        for(int i=0;i<n;i++) cout<<mini[i]<<" ";
        cout<<endl;
        for(int i=0;i<200001;i++) print[i]=0;
        print[arr[0]]=1;
        
    }
}
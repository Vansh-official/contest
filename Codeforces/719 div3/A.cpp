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
        int arr[26];
        for(int i=0;i<26;i++)
        {
            arr[i]=1;
        }
        bool ans=1;
        for(int i=0;i<n;i++)
        {
            int ind=s[i]-'A';
            while(i<n-1&&s[i]==s[i+1])
            {
                i++;
            }
            if(arr[ind]==-1)
            {
                ans=0;
                break;
            }
            arr[ind]=-1;
        }
        cout<<(ans?"YES":"NO")<<"\n";
    }
}
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
        string s;
        cin>>s;
        int n=s.length();
        int arr[26];
        for(int i=0;i<26;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            arr[s[i]-'a']++;
        }
        int coins=0;
        int rem=0;
        for(int i=0;i<26;i++)
        {
            coins+=(arr[i]/3);
            arr[i]%=3;
        }
        sort(arr,arr+26);
        for(int i=25;i>=0;i--)
        {
            if(rem<=1&&arr[i]<=1)
            {
                break;
            }
            if(arr[i]==0)
            {
                break;
            }
            rem+=arr[i];
            if(rem>=3)
            {
                rem-=3;
                arr[i]=0;
                coins++;
            }
        }
        cout<<coins<<endl;
    }
}
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
        vector<int> arr(n),freq(101);
        for(int i=0;i<101;i++)freq[i]=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }
        for(int i=0;i<101;i++)
        {
            if(freq[i]>0)
            {
                cout<<i<<" ";
                freq[i]--;
            }
        }
        for(int i=0;i<101;i++)
        {
            while(freq[i]>0)
            {
                cout<<i<<" ";
                freq[i]--;
            }
        }
        cout<<"\n";
    }
}
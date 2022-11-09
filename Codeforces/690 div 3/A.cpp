#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<set>
#include<utility>
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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }   
        int i=0,j=n-1,t=1;
        while(t<=n)
        {
            if(t%2)
            {
                cout<<arr[i]<<" ";
                i++;
            }
            else
            {
                cout<<arr[j]<<" ";
                j--;
            }
            t++;
        }
        cout<<endl;
    }
}
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
        cin>>n;
        vector<int> arr(n),ct(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ct[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(arr[i]==arr[j]) ct[i]++;
                if(arr[j]>arr[i]){
                    break;
                }
            }
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j]) ct[i]++;
                if(arr[j]>arr[i]){
                    break;
                }
            }
        }
        for(int i=0;i<n;i++) cout<<ct[i]<<" ";
        cout<<"\n";
    }
}
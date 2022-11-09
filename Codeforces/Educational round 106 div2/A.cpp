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
        int n,k1,k2,w,b;
        cin>>n>>k1>>k2>>w>>b;
        int i=0,j=0;
        i=(k1/2)+(k2/2);
        if(k1%2&&k1==k2)i++;
        j=min(k1,k2);
        j+=((max(k1,k2)-min(k1,k2))/2);
        i=max(i,j);
        int k=0;
        j=0;
        j=((n-k1)/2)+((n-k2)/2);
        if((n-k1)%2&&k1==k2)j++;
        k=min(k1,k2);
        k+=((max(n-k1,n-k2)-min(n-k1,n-k2))/2);
        j=max(j,k);
        if(i>=w&&j>=b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
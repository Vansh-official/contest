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
        int n,k;
        cin>>n>>k;
        int i=0,sum=0;
        while(1)
        {
            if(i+sum<k)
            {
                sum+=i;
                i++;
            }
            else
            {
                break;
            }
        }
        i--;
        int j=k/2;
        if(k%2)j++;
        if(i>k-j)
        {
            cout<<n-k+i<<endl;
            for(int p=1;p<=i;p++)
            {
                cout<<p<<" ";
            }
        }
        else
        {
            cout<<n-k+k-j<<endl;
            for(int p=j;p<k;p++)
            {
                cout<<p<<" ";
            }
        }
        for(int p=k+1;p<=n;p++)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    }
}
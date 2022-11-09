#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<numeric>
#include<cstring>

using namespace std;

bool prime[10000001];
int p[664579];

void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= 10000000; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 10000000; i += p)
                prime[i] = false;
        }
    }
    for(int i=2,j=0;i<=10000000;i++)
    {
        if(prime[i])
        {
            p[j++]=i;
        }
    }
}

int bs(int n,int i)
{
    int ans=0;
    int l=1,r=664578;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(i*p[mid]==n)
        {
            ans=mid;
            break;
        }
        else if(i*p[mid]<n)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return ans+1;
}

void solve(int T)
{
    int n;
    cin>>n;
    int x=bs(n,2),y=bs(n,1);
    cout<<y-x+1;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    SieveOfEratosthenes();
    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}
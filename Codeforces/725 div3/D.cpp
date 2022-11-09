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

bool prime[100002];
vector<long long> xd;

void SieveOfEratosthenes(int n = 100001)
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            xd.push_back(p);
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int factorize(long long n)
{
    int count = 0;

    for(long long d : xd)
    {
        if(d * d > n)
        {
            break;
        }

        while(n % d == 0)
        {
            n /= d;
            count++;
        }
    }

    if(n > 1)
    {
        count++;
    }

    return count;
}

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

void solve(int T)
{
    long long a,b,k;
    cin>>a>>b>>k;
    if(a==b&&a==1)
    {
        cout<<"NO";
        return;
    }
    int n=factorize(a),m=factorize(b);
    int x=2;
    if(a==b)
    {
        x=0;
    }
    else if(gcd(a,b)==a||gcd(a,b)==b)
    {
        x=1;
    }    
    if(k>=x&&k<=n+m)
    {
        if(k==1&&x==1)
        {
            cout<<"YES";
        }
        else if(k!=1)
        {
            cout<<"YES";
        }
        else 
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }
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
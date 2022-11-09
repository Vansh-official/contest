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
vector<int> xd;

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

int factorize(int n)
{
    int count = 0;
 
    for (int i = 0; i < xd.size() && xd[i] * xd[i]<= n; i++) {
        while (n % xd[i] == 0) {
            count++;
            n /= xd[i];
        }
    }

    if(n > 2)
    {
        count++;
    }

    return count;
}
void solve(int T)
{
    int a,b,k;
    cin>>a>>b>>k;
    int n=factorize(a),m=factorize(b);
    int x=1,y=1;
    if(a==1)
    {
        x=0;
    }
    if(b==1)
    {
        y=0;
    }
    if(k==1)
    {
        if(a==b)
        {
            cout<<"NO";
        }
        else if(max(a,b)%min(a,b))
        {
            cout<<"NO";
        }
        else 
        {
            cout<<"YES";
        }
        return;
    }
    if(k>=x+y&&k<=n+m)
    {
        cout<<"YES";
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
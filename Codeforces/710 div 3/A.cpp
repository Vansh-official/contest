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
    cin >> t;
    while (t--)
    {
        long long n,m,x;
        cin>>n>>m>>x;
        long long c=x/n;
        if(x%n) c++;
        long long r=x%n;
        if(x%n==0) r=n;
        cout<<((r-1)*m)+c<<endl;
    }
}
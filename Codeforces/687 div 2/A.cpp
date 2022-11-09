#include<iostream>
#include<algorithm>
#include<utility>
#include<map>
#include<set>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        int a=abs(r-1)+abs(c-1);
        int b=abs(r-n)+abs(c-1);
        int d=abs(r-1)+abs(c-m);
        int e=abs(r-n)+abs(c-m);
        a=max(a,b);
        d=max(d,e);
        a=max(a,d);
        cout<<a<<endl;
    }
}
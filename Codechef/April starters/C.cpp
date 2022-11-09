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
        int n,m,x,y,a,b;
        cin>>n>>m>>x>>y>>a>>b;
        int thief=(n-x)+(m-y);
        int z=min(n-a,m-b);
        int police=z;
        a+=z;
        b+=z;
        police+=(n-a)+(m-b);
        if(police<thief){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
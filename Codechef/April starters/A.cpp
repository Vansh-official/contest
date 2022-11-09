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
        int x,y,a,b,d;
        cin>>x>>y>>a>>b>>d;
        if(a*d<=x&&b*d<=y){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
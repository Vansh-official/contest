#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

void solve()
{
    int a;
    for(int i=1;;i++)
    {
        cout<<i*i<<endl;;
        cin>>a;
        if(a==1)
        {
            break;
        }
        else if(a==0)
        {
            continue;
        }
        else
        {
            cout<<flush;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
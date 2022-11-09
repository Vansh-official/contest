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
        if(n%2)
        {
            cout<<1<<" "<<n/2<<" "<<n/2<<endl;
            continue;
        }        
        if((n/2)%2)
        {
            cout<<2<<" "<<((n-2)/2)<<" "<<((n-2)/2)<<endl;
            continue;
        }
        cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
    }
}
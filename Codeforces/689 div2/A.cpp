#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<set>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0)
            {
                cout<<"a";
            }
            else if(i%3==1)
            {
                cout<<"b";
            }
            else
            {
                cout<<"c";
            }            
        }
        cout<<endl;
    }
}
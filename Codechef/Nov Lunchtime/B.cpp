#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int count=0;
        for(int i=0;i<=n;i++)
        {
            if((x^i)<(y^i))
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}



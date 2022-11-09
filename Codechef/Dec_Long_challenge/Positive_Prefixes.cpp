#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x=n-k;
        char prev='n';
        for(int i=0;i<n;i++)
        {
            if(prev=='p')
            {
                if(x)
                {
                    cout<<-(i+1)<<" ";
                    x--;
                    prev='m';
                }
                else
                {
                    cout<<i+1<<" ";
                    k--;
                    prev='p';
                }
            }
            else if(prev=='m')
            {
                if(k)
                {
                    cout<<i+1<<" ";
                    k--;
                    prev='p';
                }
                else if(x)
                {
                    cout<<-(i+1)<<" ";
                    x--;
                    prev='m';
                }                
            }
            else
            {
                if(x)
                {
                    cout<<-(i+1)<<" ";
                    x--;
                    prev='m';
                }   
                else if(k)
                {
                    cout<<i+1<<" ";
                    k--;
                    prev='p';
                }
            }            
        }
        cout<<endl;
    }
}
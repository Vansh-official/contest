#include<iostream>
#include<algorithm>
using namespace std;

int cost=0; 

int check(int f[],int c[],int l,int cf,int cc,int t,int n)
{
    for(int i=0;i<=f[(l+n)%n];i++)
    {
        if(t==n)
        {
            return 0;
        }
        cf+=i;
        if(cf>0)
        {
            cc+=(i*c[l])
            return check(f,c,l+1,cf,cc,t+1);
        }
        else 
        {
            continue;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int* f=new int[n];
        int* c=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        int curcost=0;
        for(int i=0;i<n;i++)
        {
            
            if(i==1)
            {
                cost=curcost;
            }
            else
            {
                cost=min(cost,curcost);
            }
        }    
        cout<<cost<<endl;  
    }
}
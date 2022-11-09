#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int r=0;
        int bl=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]-'0'>b[i]-'0')
            {
                r++;
            }
            else if(b[i]-'0'>a[i]-'0')
            {
                bl++;
            }
        }
        if(r>bl)
        {
            cout<<"RED"<<endl;
        }
        else if(bl>r)
        {
            cout<<"BLUE"<<endl;
        }
        else
        {
            cout<<"EQUAL"<<endl;
        }        
    }
}
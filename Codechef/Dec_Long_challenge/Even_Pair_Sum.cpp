#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long ea=a/2;
        long long eb=b/2;
        long long oa=(a/2)+(a%2);
        long long ob=(b/2)+(b%2);
        cout<<(ea*eb)+(oa*ob)<<endl;
    }
}
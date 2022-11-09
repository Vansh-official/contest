#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<utility>
#include<cmath>
#include<math.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    long long count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i*(j+1))%(j-i)==0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
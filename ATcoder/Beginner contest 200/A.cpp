#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<9;i++)
    {
        if(s.substr(i,4)=="ZONe")
        {
            count++;
        }
    }
    cout<<count<<"\n";
}
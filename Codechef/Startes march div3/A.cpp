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
       long long r,o,c;
       cin>>r>>o>>c;
       long long x=20-o;
       x=6*6*x;
       if(x+c>r) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
}
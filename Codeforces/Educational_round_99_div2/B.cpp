#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<math.h>

using namespace std;

vector<int> f;

/*bool xD(int sum, int moves, int d,char prev)
{
        if (sum >= d)
        {
            f.push_back(moves + sum - d);
            return true;
        }
        else
        {
            xD(sum + moves + 1, moves + 1, d, 'r');
            if (prev=='r')
            {
                xD(sum - 1, moves + 1, d, 'l');
            }
            return true;
        }
}*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        /*xD(0,0,n,'r');*/
        int i=1;
        for(;i<n;i++)
        {
            int x=i*(i+1)/2;
            if(x>=n)
            {
                break;
            }
        }
        int d=i*(i+1)/2;
        int x=d;
        d-=n;
        int moves=i+d;
        if(d>1)
        {
            moves=i;
        }
        cout<<moves<<endl;
    }
}
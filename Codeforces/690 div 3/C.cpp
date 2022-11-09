#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<set>
#include<math.h>
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
        int x;
        cin>>x;
        int temp=x;
        int num=0;
        int dig=0;
        int prev=10;
        while(temp)
        {
            if(temp<prev)
            {
                num+=(pow(10,dig)*(temp));
                dig++;
                temp=0;
            }
            else
            {
                num+=(pow(10,dig)*(prev-1));
                dig++;
                prev--;
                temp-=prev;   
            }      
            if(temp!=0&&prev==1)
            {
                num=-1;
                break;
            }      
        }
        cout<<num<<endl;
    }
}
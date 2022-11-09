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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int ct=0,cm=0;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                ct++;
            }
            else{
                cm++;
            }
        }
        if(2*cm!=ct){
            cout<<"No"<<endl;
            continue;
        }
        int count=0;
        bool cond=1;
        int m=0;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                count++;
                continue;
            }
            if(s[i]=='M'){
                m++;
                if(m>count){
                    cond=0;
                    break;
                }
            }
        }
        if(!cond){
            cout<<"No\n";
            continue;
        }
        count=0;
        m=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='T'){
                count++;
                continue;
            }
            if(s[i]=='M'){
                m++;
                if(m>count){
                    cond=0;
                    break;
                }
            }
        }
        if(!cond){
            cout<<"No\n";
            continue;
        }
        cout<<"Yes\n";
    }
}
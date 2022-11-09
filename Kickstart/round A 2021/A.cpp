#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

void solve(int t)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int score=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1]) score++;
    }
    cout<<"case #"<<t<<": "<<abs(score-k)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int a=1;a<=t;a++)
    {
        solve(a);
    }
}
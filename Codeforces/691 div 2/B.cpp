#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<map>
using namespace std;

int n;
int ct=0;

bool rec(int x,int y,int z,int moves)
{
    if(moves==n)
    {
        ct++;
        return true;
    }
    if(z==-1)
    {
        rec(x+1,y,1,moves+1);
        rec(x-1,y,1,moves+1);
        rec(x,y+1,0,moves+1);
        rec(x,y-1,0,moves+1);
    }
    if(z==1)
    {
        rec(x,y+1,0,moves+1);
        rec(x,y-1,0,moves+1);
    }
    else
    {
        rec(x+1,y,1,moves+1);
        rec(x-1,y,1,moves+1);
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    rec(0,0,-1,0);
    cout<<ct<<endl;
}
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
    int n;
    cin>>n;  
    vector<vector<int>> arr( n , vector<int> (5, 0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    
}
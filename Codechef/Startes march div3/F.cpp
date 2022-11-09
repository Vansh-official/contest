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

vector<pair<int,int>> arr(10001);
int n,k;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}


int ans()
{
    int i, w;
    int K[n + 1][k + 1];

    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= k; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (arr[i - 1].second <= w)
                K[i][w] = max(arr[i - 1].first + K[i - 1][w - arr[i - 1].second], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[1][k];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
        sort(arr.begin(),arr.end());
        cout<<ans()<<endl;
    }
}
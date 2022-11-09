#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<set>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<vector<pair<int,int>>> fr(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='*')
                {
                    count++;
                    int t=j;
                    while(j<m-1&&arr[i][j+1]=='*')
                    {
                        j++;
                        count++;
                    }
                    if(t!=j)
                    {
                        fr[i].push_back({t,j});
                    }
                }
            }
        }
        cout << count << "\n";
    }
}
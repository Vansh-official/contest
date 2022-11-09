#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<map>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long minc = 0;
        for (int i = n - 1; i > 0; i--)
        {
            minc += abs(arr[i] - arr[i - 1]);
        }
        long long m = minc;
        for (int i = 0; i < n; i++)
        {
            if(i==0)
            {
                minc=min(minc,m-abs(arr[i]-arr[i+1]));
            }
            else if(i==n-1)
            {
                minc=min(minc,m-abs(arr[i-1]-arr[i]));
            }
            else
            {
                minc=min(minc,m-abs(arr[i]-arr[i+1])-abs(arr[i]-arr[i-1])+abs(arr[i-1]-arr[i+1]));
            }
            
        }
        cout << minc << endl;
    }
}
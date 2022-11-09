#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        long long d;
        cin >> n >> d;
        long long* arr = new long long[n];
        long long nr=0;
        long long r=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]<=9||arr[i]>=80)
            {
                r++;
            }
            else
            {
                nr++;
            }            
        }
        long long days=(r/d)+(nr/d);
        if(r%d)
        {
            days++;
        }
        if(nr%d)
        {
            days++;
        }
        cout<<days<<endl;
    }
}
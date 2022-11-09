#include<iostream>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<set>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int po[31];
    int pro = 1;
    for (int i = 0; i < 31; i++)
    {
        po[i] = pro;
        pro *= 2;
    }
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int* arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> fr(31);
        for (int i = 0; i < 31; i++)
        {
            fr[i] = 0;
        }
        int ind = 0;
        while (ind < n)
        {
            for (int i = 30; i >= 0; i--)
            {
                if ((arr[ind] & (1 << i)) != 0)
                {
                    if (fr[i] > 0)
                    {
                        fr[i]--;
                        arr[ind] ^= po[i];
                    }
                    else if(x > 0 && ind < n - 1)
                    {
                        fr[i]++;
                        x--;
                        arr[ind] ^= po[i];
                    }
                }
            }
            ind++;
        }
        for (int i = 0; i < 31; i++)
        {
            while (fr[i]-- > 0)
            {
                arr[n - 1] ^= po[i];
            }
        }
        if (n > 2 && x % 2 == 1);
        else if (x % 2 == 1)
        {
            arr[n - 1] ^= 1;
            arr[n - 2] ^= 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
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
        int** fr = new int*[n];
        for (int i = 0; i < n; i++)
        {
            fr[i] = new int [m];
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '*')
                {
                    sum++;
                }
                fr[i][j] = sum;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '*')
                {
                    count++;
                    int k = 1;
                    while (i + k < n && j - k >= 0 && j + k < m)
                    {
                        int x = fr[i + k][j + k];
                        int y;
                        if (j - k == 0)
                        {
                            y = 0;
                        }
                        else
                        {
                            y = fr[k + i][j - k - 1];
                        }
                        if (x - y == (2 * k) + 1)
                        {
                            k++;
                            count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
        cout << count << "\n";
        for (int i = n - 1; i >= 0; i--)
        {
            delete[] fr[i];
        }
    }
}
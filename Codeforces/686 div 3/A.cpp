#include<iostream>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int* arr = new int[n];
        arr[0] = n;
        for (int i = 1; i < n; i++)
        {
            arr[i] = i;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}
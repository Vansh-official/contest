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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<char>> arr(n, vector<char>(n));
        int x1 = -1, y1 = -1, x2 = -1, y2 = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == '*') {
                    if (x1 == -1) {
                        x1 = i;
                        y1 = j;
                    }
                    else {
                        x2 = i;
                        y2 = j;
                    }
                }
            }
        }
        if (x1 == x2) {
            if (x1 + 1 < n) {
                arr[x1 + 1][y1] = '*';
                arr[x2 + 1][y2] = '*';
            }
            else {
                arr[x1 - 1][y1] = '*';
                arr[x2 - 1][y2] = '*';
            }
        }
        else if (y1 == y2) {
            if (y1 + 1 < n) {
                arr[x1][y1 + 1] = '*';
                arr[x2][y2 + 1] = '*';
            }
            else {
                arr[x1][y1 - 1] = '*';
                arr[x2][y2 - 1] = '*';
            }
        }
        else {
            arr[x2][y1] = '*';
            arr[x1][y2] = '*';
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}
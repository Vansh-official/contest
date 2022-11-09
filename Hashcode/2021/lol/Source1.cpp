/*#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int r, c, x;
		cin >> r >> c >> x;
		int arr[r][c], brr[r][c];
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				cin >> arr[i][j];
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				cin >> brr[i][j];
		bool flag = 1;
		for (int i = 0; i < r - x + 1; i++)
		{
			for (int j = 0; j < c - x + 1; j++)
			{
				if (arr[i][j] > brr[i][j])
				{
					flag = 0;
					cout << "No" << endl;
					break;
				}
				if (arr[i] == brr[i])
					continue;
				int y = brr[i][j + 1] - arr[i][j + 1], z = brr[i + 1][j] - arr[j + 1][i];
				if (y == 0 && z == 0)
				{
					flag = 0;
					cout << "No" << endl; 
					break;
				}
				if (y == 0)
				{
					for (int k = i; k < i + x; k++)
					{
						arr[k][j] += z;
					}
					continue;
				}
				else if (z == 0)
				{

				}
			}
		}
	}
}
*/
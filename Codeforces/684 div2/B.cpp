#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		long long* arr = new long long[n * k];
		int j = n / 2;
		long long sum = 0;
		int f = j;
		for (int i = (n * k) - 1; i >= 0 ; i--)
		{	
			cin >> arr[i];
		}
		int c = k;
		for (int c = k; c > 0; c--)
		{
			sum += arr[j];
			j += f + 1;
		}
		cout << sum << endl;
	}
}
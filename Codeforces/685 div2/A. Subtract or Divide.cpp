#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		int count = 0;
		while (n > 1)
		{
			if (n == 2)
			{
				count++;
				break;
			}
			if (n % 2 == 0)
			{
				long long temp = n / 2;
				n /= temp;
				count++;
			}
			else
			{
				n--;
				count++;
			}
			if (n == 1)
				break;
		}
		cout << count << endl;
	}
}
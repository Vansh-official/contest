#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;
		string s;
		cin >> s;
		while (q--)
		{
			int l, r;
			cin >> l >> r;
			if (l == 1 && r == n)
			{
				cout << "NO" << endl;
			}
			else
			{
				char ch1 = s[l - 1], ch2 = s[r - 1];
				bool lcond = false, rcond = false;
				if (l > 1)
				{
					for (int i = 0; i < l - 1; i++)
					{
						if (ch1 == s[i])
						{
							rcond = true;
							break;
						}
					}
				}
				if (r < n)
				{
					for (int i = r; i < n; i++)
					{
						if (ch2 == s[i])
						{
							lcond = true;
							break;
						}
					}
				}
				if (lcond || rcond)
				{
					cout << "YES" << endl;
				}
				else
				{
					cout << "NO" << endl;
				}
			}
		}
	}
}
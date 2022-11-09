#include<iostream>
#include<string>
#include<string.h>
#include<utility>
using namespace std;
int main()
{
	int t;
	cin >> t;
	pair<int, int> arr[26];
	for (int i = 0; i < 26; i++)
		arr[i].first = arr[i].second = 0;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		string s1, s2;
		cin >> s1 >> s2;
		for (int i = 0; i < n; i++)
		{
			int a = s1[i] - 'a';
			int b = s2[i] - 'a';
			arr[a].first++;
			arr[b].second++;
		}
		bool cond = true;
		for (int i = 0; i < 26; i++)
		{
			if (arr[i].first < arr[i].second)
			{
				cout << "No" << endl;
				cond = false;
				break;
			}
			else if (arr[i].first > arr[i].second)
			{
				if (i == 25)
				{
					cout << "No" << endl;
					cond = false;
					break;
				}
				else
				{
					if ((arr[i].first - arr[i].second) % k == 0)
					{
						arr[i + 1].first += arr[i].first - arr[i].second;
					}
					else
					{
						cout << "No" << endl;
						cond = false;
						break;
					}
				}
			}
		}
		if (cond)
		{
			cout << "Yes" << endl;
		}
		for (int i = 0; i < 26; i++)
			arr[i].first = arr[i].second = 0;
	}
}
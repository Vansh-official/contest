#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, c0, c1, h;
		string s;
		cin >> n >> c0 >> c1 >> h >> s;
		int zcount = 0;
		int ocount = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0')
				zcount++;
			else
				ocount++;
		}
		int cost = 0;
        if (h + c0 < c1)
		{
	         cost = (zcount * c0) + ((c0 + h) * (ocount));
	    }
		else if (h + c1 < c0)
		{
		     cost = (ocount * c1) + ((c1 + h) * zcount);
		}
		else
		{
			cost = (ocount * c1) + (zcount * c0);
		}
		cout << cost << endl;
	}
}
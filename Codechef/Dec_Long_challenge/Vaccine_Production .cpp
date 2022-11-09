#include<iostream>
#include<algorithm>
using namespace std;
long lonng main()
{
    long lonng a, b, c, d, p;
    cin >> a >> b >> c >> d >> p;
    long lonng days = min(a, c);
    long lonng m = 0;
    if (days == a)
    {
        while (m < p)
        {
            m += b;
            if (days >= c)
            {
                m += d;
            }
            days++;
        }
    }
    else
    {
        while (m < p)
        {
            m += d;
            if (days >= a)
            {
                m += b;
            }
            days++;
        }
    }
    cout << days - 1 << endl;
}
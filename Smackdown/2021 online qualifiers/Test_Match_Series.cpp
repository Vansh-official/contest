#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[5];
        int ind = 0, eng = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                ind++;
            }
            else if (arr[i] == 2)
            {
                eng++;
            }
        }
        if (ind > eng)
        {
            cout << "INDIA\n";
        }
        else if (eng > ind)
        {
            cout << "ENGLAND\n";
        }
        else
        {
            cout << "DRAW\n";
        }
    }
    return 0;
}

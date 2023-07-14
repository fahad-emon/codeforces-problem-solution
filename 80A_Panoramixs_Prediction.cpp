#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, count = 0, flag = 1;

    cin >> m >> n;
    for (int i = m + 1; i <= n; i++)
    {
        count = 0;
        for (int j = 2; j < (n / 2) + 1; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            if (i == n)
            {
                cout << "YES" << endl;
                flag = 0;
                break;
            }
            else
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        cout << "NO" << endl;

    return 0;
} /*
 7 11 */

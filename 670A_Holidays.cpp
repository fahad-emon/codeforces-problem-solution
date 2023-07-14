#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // input
    cin >> n;
    if (n < 7)
    {
        if (n <= 2)
        {
            cout << "0"
                 << " " << n << endl;
            return 0;
        }
        else if (n == 6)
        {
            cout << "1"
                 << " "
                 << "2" << endl;
            return 0;
        }
        else
        {
            cout << "0"
                 << " "
                 << "2" << endl;
            return 0;
        }
    }
    else
    {
        if (n % 7 != 0)
        {

            if (n % 7 == 1)
            {
                cout << 2 * (n / 7) << " " << (2 * (n / 7)) + 1 << endl;
            }
            else if (n % 7 == 6)
            {
                cout << (2 * (n / 7)) + 1 << " " << (2 * (n / 7)) + 2 << endl;
            }
            else
            {
                cout << 2 * (n / 7) << " " << (2 * (n / 7)) + 2 << endl;
            }
        }
        else
        {
            int ans = 2 * (n / 7);
            cout << ans << " " << ans << endl;
        }
    }

    return 0;
}
/* 22 / 7 = 3  m=1 mi= 3*2= 6 max = (22-(3*7) ) + 6
 */

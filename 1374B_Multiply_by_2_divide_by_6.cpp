#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);  */

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 2)
        {
            cout << "0" << endl;
            continue;
        }

        if (n < 6)
        {
            if (n == 3)
            {
                cout << "2" << endl;
                continue;
            }
            else
            {
                cout << "-1" << endl;
                continue;
            }
        }
        int c = 0;
        int f = 1;
        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n /= 6;
                c++;
            }
            else
            {
                n *= 2;
                c++;
                if (n % 3 != 0)
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f == 1)
        {
            cout << c << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
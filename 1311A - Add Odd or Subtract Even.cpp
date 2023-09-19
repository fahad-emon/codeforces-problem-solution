#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 2;
        if (a == b)
        {
            ans = 0;
        }
        else if (a > b && (a - b) % 2 == 0)
        {
            ans = 1;
        }
        else if (b > a && (b - a) % 2 != 0)
        {
            ans = 1;
        }
        cout << ans << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int f = 0;
        if (max(a, b) < min(c, d))
        {
            f = 1;
        }
        if (max(c, d) < min(a, b))
        {
            f = 1;
        }
        if (f == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

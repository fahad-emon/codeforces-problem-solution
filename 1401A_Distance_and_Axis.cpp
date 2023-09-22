#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, k;
        cin >> a >> k;
        if (a < k)
        {
            cout << k - a << endl;
        }
        else
        {
            cout << (a - k) % 2 << endl;
        }
    }

    return 0;
}
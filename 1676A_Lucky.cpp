#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        if (st[0] + st[1] + st[2] == st[3] + st[4] + st[5])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
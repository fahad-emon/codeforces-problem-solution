#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 0, c = 0;
    cin >> t;

    while (c <= t)
    {
        x++;
        c += (x * (x + 1)) / 2;
    }
    cout << x - 1 << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x + y == z || x + z == y || y + z == x)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
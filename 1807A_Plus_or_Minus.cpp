#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y == z)
            printf("+\n");
        else
            printf("-\n");
    }

    return 0;
}
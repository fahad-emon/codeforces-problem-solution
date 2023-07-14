#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> t[i];
    }
    int c = 1;
    sort(t, t + 4);

    for (int i = 0; i < 4 - 1; i++)
    {
        if (t[i] != t[i + 1])
            c++;
    }
    cout << (4 - c) << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, c = 0;
    cin >> m >> n;
    char ch;
    for (int i = 1; i <= (m * n); i++)
    {
        cin >> ch;
        if (ch == 'B' || ch == 'W' || ch == 'G')
            c++;
    }
    if (c == (m * n))
        cout << "#Black&White" << endl;
    else
        cout << "#Color" << endl;

    return 0;
}
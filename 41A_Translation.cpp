#include <bits/stdc++.h>
using namespace std;

int main()
{

    string st1, st2;
    cin >> st1 >> st2;
    int l = st1.length();
    int f = 0;
    for (int i = 0; i < l; i++)
    {
        if (st1[i] != st2[l - i - 1])
        {
            cout << "NO" << endl;
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "YES" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string st;
    cin >> st;
    int f = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == 'W' && st[i + 1] == 'U' && st[i + 2] == 'B')
        {
            i += 2;
        }
        else
        {
            cout << st[i];
            if (st[i + 1] == 'W' && st[i + 2] == 'U' && st[i + 3] == 'B')
            {
                cout << " ";
                i += 3;
            }
        }
    }
    cout << endl;

    return 0;
}
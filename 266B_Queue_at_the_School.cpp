#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int x, y;
    while (cin >> x >> y)
    {

        string st;
        cin >> st;
        while (y--)
        {
            for (int i = 0; i < x - 1; i++)
            {
                if (st[i] == 'B' and st[i + 1] == 'G')
                {
                    char c = st[i];
                    st[i] = st[i + 1];
                    st[i + 1] = c;
                    i++;
                }
            }
        }
        cout << st << endl;
    }

    return 0;
}
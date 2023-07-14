#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        string st;
        cin >> x;
        cin >> st;
        char start[1];
        start[0] = st[0];

        for (int i = 1; i < st.length(); i++)
        {
            if (start[0] == st[i])
            {
                cout << start[0];
                start[0] = st[i+1];
                i++;
            }
        }
        cout << endl;
    }

    return 0;
}
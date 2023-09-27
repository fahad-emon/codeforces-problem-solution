#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string st;
    cin >> st;

    int l = st.length() - 1;
    int f = st.length();
    while (l > 0)
    {
        if (st[l] >= '5')
        {
            st[l - 1]++;
            f = l;
        }
        l--;
    }

    for (int i = f; i < st.length(); i++)
    {
        st[i] = '0';
    }

    if (st[0] >= '5')
    {
        cout << "10";
        for (int i = 1; i < st.length(); i++)
        {
            cout << "0";
        }
        cout << endl;
    }
    else
    {
        cout << st << endl;
    }
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
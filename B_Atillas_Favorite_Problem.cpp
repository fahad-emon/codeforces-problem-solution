#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        string st;
        cin >> st;
        int mx = 0;
        for (int i = 0; i < st.size(); i++)
        {
            mx = max(mx, (int)st[i] - 96);
        }
        cout << mx << "\n";
    }

    return 0;
}
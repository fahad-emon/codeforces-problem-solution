#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*  freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout); */

    int t;
    cin >> t;
    string st = "codeforces";
    while (t--)
    {
        char c;
        cin >> c;
        int f = 0;
        for (int i = 0; i < st.length(); i++)
        {
            if (c == st[i])
            {
                cout << "YES" << endl;
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << "NO" << endl;
    }
    return 0;
}

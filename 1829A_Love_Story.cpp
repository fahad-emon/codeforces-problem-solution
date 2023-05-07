#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string st = "codeforces";
    while (t--)
    {
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != st[i])
                c++;
        }

        cout << c << endl;
    }

    return 0;
}
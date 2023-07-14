// A C++ code to add two arrays
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x;
        cin >> x;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), [](char c)
                  { return tolower(c); });
        s.erase(unique(s.begin(), s.end()), s.end());
        cout << (s == "meow" ? "YES" : "NO") << endl;
    }

    return 0;
}

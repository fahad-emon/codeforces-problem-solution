
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string st;
    cin >> st;
    vector<int> c(10);
    for (auto x : st)
    {
        c[x - '0']++;
    }
    int max = *max_element(c.begin(), c.end());
    if (max == 4)
        cout << "-1" << endl;
    else if (max == 3)
        cout << "6" << endl;
    else
        cout << "4" << endl;

    return;
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

/*
1 3 3 3

 */
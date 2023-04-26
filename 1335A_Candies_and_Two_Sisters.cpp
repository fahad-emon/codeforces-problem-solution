#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n <= 2)
            cout << "0" << endl;
        else
            cout << (n - 1) / 2 << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int i = 0;
    while (n != 0 && m != 0)
    {
        n--;m--;
        i++;
    }
    if (i % 2 != 0)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        cout << "Malvika" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin >> x;
    int count = 0;
    while (x != 0)
    {
        if (x % 10 == 4 || x % 10 == 7)
        {
            count++;
        }
        x /= 10;
    }

    if (count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
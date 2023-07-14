#include <bits/stdc++.h>
using namespace std;

int t;
void solve()
{
    int array[t];
    int flag = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> array[i];
        if (array[i] == 1)
        {
            flag = 1;
        }
    }
    if (flag)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return;
}
int main()
{

    cin >> t;
    solve();

    return 0;
}
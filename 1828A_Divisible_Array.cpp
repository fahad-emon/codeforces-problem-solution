#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int arr[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cout << i * 2 << " ";
    }
    cout << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        solve(x);
    }

    return 0;
}

/*

1-> 1
2-> 2 4
3-> 1 2 3
4-> 2 8 6 4
5-> 3 4 9 4 5
6-> 1 10 18 8 5 36
7-> 3 6 21 24 10 6 14



 */
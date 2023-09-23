#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;   int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
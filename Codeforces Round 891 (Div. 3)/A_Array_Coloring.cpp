#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    int arr[n];
    int odd_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            odd_sum += arr[i];
        }
    }
    if (odd_sum % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}
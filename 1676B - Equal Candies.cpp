#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            ans += arr[i] - arr[0];
        }

        cout << ans << endl;
    }

    return 0;
}

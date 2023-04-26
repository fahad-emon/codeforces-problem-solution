#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t];
    double ans = 0.0, sum = 0.0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    ans = sum / t;
    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}
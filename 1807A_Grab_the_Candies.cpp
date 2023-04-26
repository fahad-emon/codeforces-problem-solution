#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, even = 0, odd = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }
    if (even > odd)
        printf("YES\n");
    else
        printf("NO\n");

    return;
}
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        solve();
        t--;
    }

    return 0;
}